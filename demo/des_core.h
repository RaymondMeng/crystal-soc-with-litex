#ifndef __DES_CORE_H
#define __DES_CORE_H

#include <stdint.h>

// DES 核心寄存器地址
#define DES_CORE_BASE       CSR_DES_CORE_BASE
#define DES_DIN_ADDR        CSR_DES_CORE_DIN_ADDR
#define DES_KEY_DIN_ADDR    CSR_DES_CORE_KEY_DIN_ADDR
#define DES_MODE_ADDR       CSR_DES_CORE_MODE_ADDR 
#define DES_START_ADDR      CSR_DES_CORE_START_ADDR
#define DES_RST_N_ADDR      CSR_DES_CORE_RST_N_ADDR
#define DES_DOUT_ADDR       CSR_DES_CORE_DOUT_ADDR
#define DES_DAT_VALID_ADDR  CSR_DES_CORE_DAT_VALID_ADDR

// DES 模式
#define DES_MODE_ENCRYPT    0
#define DES_MODE_DECRYPT    1

// 函数声明
void des_core_init(void);
void des_core_encrypt(uint64_t plaintext, uint64_t key, uint64_t *ciphertext);
void des_core_decrypt(uint64_t ciphertext, uint64_t key, uint64_t *plaintext);

#endif // __DES_CORE_H
