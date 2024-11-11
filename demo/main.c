// This file is Copyright (c) 2020 Florent Kermarrec <florent@enjoy-digital.fr>
// License: BSD

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <system.h>
#include <irq.h>
#include <libbase/uart.h>
#include <libbase/console.h>
#include <generated/csr.h>
// #include "liblitedescore/des_core.h"

/*-----------------------------------------------------------------------*/
/* Uart                                                                  */
/*-----------------------------------------------------------------------*/

static char *readstr(void)
{
	char c[2];
	static char s[64];
	static int ptr = 0;

	if(readchar_nonblock()) {
		c[0] = getchar();
		c[1] = 0;
		switch(c[0]) {
			case 0x7f:
			case 0x08:
				if(ptr > 0) {
					ptr--;
					fputs("\x08 \x08", stdout);
				}
				break;
			case 0x07:
				break;
			case '\r':
			case '\n':
				s[ptr] = 0x00;
				fputs("\n", stdout);
				ptr = 0;
				return s;
			default:
				if(ptr >= (sizeof(s) - 1))
					break;
				fputs(c, stdout);
				s[ptr] = c[0];
				ptr++;
				break;
		}
	}

	return NULL;
}

static char *get_token(char **str)
{
	char *c, *d;

	c = (char *)strchr(*str, ' ');
	if(c == NULL) {
		d = *str;
		*str = *str+strlen(*str);
		return d;
	}
	*c = 0;
	d = *str;
	*str = c+1;
	return d;
}

static void prompt(void)
{
	printf("\e[92;1mcrystal-soc-app\e[0m> ");
}

/*-----------------------------------------------------------------------*/
/* Help                                                                  */
/*-----------------------------------------------------------------------*/

static void help(void)
{
	puts("\nLiteX minimal demo app built "__DATE__" "__TIME__"\n");
	puts("Available commands:");
	puts("help               - Show this command");
	puts("reboot             - Reboot CPU");
#ifdef CSR_LEDS_BASE
	puts("led                - Led demo");
#endif
#ifdef CSR_DES_CORE_BASE
	puts("des_encryp         - des encryption mode");
	puts("des_decryp         - des decryption mode");
#endif
	puts("donut              - Spinning Donut demo");
	puts("helloc             - Hello C");
#ifdef WITH_CXX
	puts("hellocpp           - Hello C++");
#endif
}

/*-----------------------------------------------------------------------*/
/* Commands                                                              */
/*-----------------------------------------------------------------------*/

static void reboot_cmd(void)
{
	ctrl_reset_write(1);
}

#ifdef CSR_LEDS_BASE
static void led_cmd(void)
{
	int i;
	printf("Led demo...\n");

	printf("Counter mode...\n");
	for(i=0; i<32; i++) {
		leds_out_write(i);
		busy_wait(100);
	}

	printf("Shift mode...\n");
	for(i=0; i<4; i++) {
		leds_out_write(1<<i);
		busy_wait(200);
	}
	for(i=0; i<4; i++) {
		leds_out_write(1<<(3-i));
		busy_wait(200);
	}

	printf("Dance mode...\n");
	for(i=0; i<4; i++) {
		leds_out_write(0x55);
		busy_wait(200);
		leds_out_write(0xaa);
		busy_wait(200);
	}
}
#endif


// #ifdef CSR_DES_CORE_BASE

// static void des_core_cmd(void)
// {
// 	int i;
// 	printf("Entering des mode...\n");

// 	printf("Counter mode...\n");
// 	for(i=0; i<32; i++) {
// 		leds_out_write(i);
// 		busy_wait(100);
// 	}

// 	printf("Shift mode...\n");
// 	for(i=0; i<4; i++) {
// 		leds_out_write(1<<i);
// 		busy_wait(200);
// 	}
// 	for(i=0; i<4; i++) {
// 		leds_out_write(1<<(3-i));
// 		busy_wait(200);
// 	}

// 	printf("Dance mode...\n");
// 	for(i=0; i<4; i++) {
// 		leds_out_write(0x55);
// 		busy_wait(200);
// 		leds_out_write(0xaa);
// 		busy_wait(200);
// 	}
// }
// #endif
// extern void des_core_encrypt(uint64_t plaintext, uint64_t key, uint64_t *ciphertext);
// extern void des_core_decrypt(uint64_t ciphertext, uint64_t key, uint64_t *plaintext);
extern void donut(void);

static void donut_cmd(void)
{
	printf("Donut demo...\n");
	donut();
}

extern void helloc(void);

static void helloc_cmd(void)
{
	printf("Hello C demo...\n");
	helloc();
}

#ifdef WITH_CXX
extern void hellocpp(void);

static void hellocpp_cmd(void)
{
	printf("Hello C++ demo...\n");
	hellocpp();
}
#endif

/*-----------------------------------------------------------------------*/
/* Console service / Main                                                */
/*-----------------------------------------------------------------------*/

static void console_service(void)
{
	char *str;
	char *token;

	str = readstr();
	if(str == NULL) return;
	token = get_token(&str);
	if(strcmp(token, "help") == 0)
		help();
	else if(strcmp(token, "reboot") == 0)
		reboot_cmd();
#ifdef CSR_LEDS_BASE
	else if(strcmp(token, "led") == 0)
		led_cmd();
#endif
#ifdef CSR_DES_CORE_BASE
	else if(strcmp(token, "des_encryp") == 0){
		printf("Entering des_encryp...\n");
		printf("Please input plaintext: "); //可能会有超过64位的数据，需要分组加密
		//64位为一组，分组加密
		
		// 读取输入的明文字符串
		char plaintext_str[256];
		int index = 0;
		char ch;
		while ((ch = getchar()) != '\n' && index < sizeof(plaintext_str) - 1) {
			plaintext_str[index++] = ch;
			putchar(ch); // 显示输入的字符
		}
		putchar('\n');
    	plaintext_str[index] = '\0'; // 添加字符串结束符
		
		size_t len = strlen(plaintext_str);
		size_t num_blocks = (len + 14) / 16; // 计算需要的块数，每块64位（8字节）
		printf("num_blocks: %d\n", num_blocks);

		printf("Please input 64-bit key: ");
		char key_str[17];

		int index1 = 0;
		char ch1;
		while ((ch1 = getchar()) != '\n' && index1 < sizeof(key_str) - 1) {
			key_str[index1++] = ch1;
			putchar(ch1); // 显示输入的字符
		}
		putchar('\n');
    	key_str[index1] = '\0'; // 添加字符串结束符
		// puts(key_str);
		uint64_t key;
		sscanf(key_str, "%llx", &key);
		uint64_t ciphertext;

		printf("ciphertext: ");
		uint64_t plaintext_blocks[num_blocks];
		// 对每个块进行加密
		for (size_t i = 0; i < num_blocks; i++) {
			// 将每个块转换为64位无符号整数
			char block_str[17] = {0}; // 每个块16个十六进制字符 + 1个结束符
			strncpy(block_str, plaintext_str + i * 16, 16);
			sscanf(block_str, "%llx", &plaintext_blocks[i]);
			des_core_rst_n_write(0);
			des_core_rst_n_write(1);

			des_core_encrypt(plaintext_blocks[i], key, &ciphertext);
			// ciphertext = des_core_dout_read();
			printf("%16llx", ciphertext);
		}
		printf("\n");
	}
	//64位为一组，分组解密
	else if(strcmp(token, "des_decryp") == 0){
		printf("Entering des_decryp...\n");
		printf("Please input ciphertext: ");

		// 读取输入的密文字符串
		char ciphertext_str[256];
		char ch1;
		int index1;

		while ((ch1 = getchar()) != '\n' && index1 < sizeof(ciphertext_str) - 1) {
			ciphertext_str[index1++] = ch1;
			putchar(ch1); // 显示输入的字符
		}
		putchar('\n');
    	ciphertext_str[index1] = '\0'; // 添加字符串结束符

		size_t len = strlen(ciphertext_str);
		size_t num_blocks = (len + 14) / 16; // 计算需要的块数，每块64位（8字节）
		printf("num_blocks: %d\n", num_blocks);

		printf("Please input 64-bit key: ");
		char key_str[17];

		index1 = 0;
		while ((ch1 = getchar()) != '\n' && index1 < sizeof(key_str) - 1) {
			key_str[index1++] = ch1;
			putchar(ch1); // 显示输入的字符
		}
		putchar('\n');
    	key_str[index1] = '\0'; // 添加字符串结束符

		uint64_t key;
		uint64_t plaintext;
		uint64_t ciphertext_blocks[num_blocks];

		sscanf(key_str, "%llx", &key);

		printf("plaintext: ");
		// 对每个块进行解密
		for (size_t i = 0; i < num_blocks; i++) {
			// 将每个块转换为64位无符号整数
			char block_str[17] = {0}; // 每个块16个十六进制字符 + 1个结束符
			strncpy(block_str, ciphertext_str + i * 16, 16);
			sscanf(block_str, "%llx", &ciphertext_blocks[i]);
			des_core_rst_n_write(0);
			des_core_rst_n_write(1);

			des_core_decrypt(ciphertext_blocks[i], key, &plaintext);
			// plaintext = des_core_dout_read();
			printf("%16llx", plaintext);
		}
		printf("\n");
	}
#endif
	else if(strcmp(token, "donut") == 0)
		donut_cmd();
	else if(strcmp(token, "helloc") == 0)
		helloc_cmd();
#ifdef WITH_CXX
	else if(strcmp(token, "hellocpp") == 0)
		hellocpp_cmd();
#endif
	prompt();
}

int main(void)
{
#ifdef CONFIG_CPU_HAS_INTERRUPT
	irq_setmask(0);
	irq_setie(1);
#endif
	uart_init();

	help();
	prompt();

	while(1) {
		console_service();
	}

	return 0;
}
