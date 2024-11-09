#include "des_core.h"
#include <generated/csr.h>
#include <stdio.h>
#include <stdint.h>
#include <libbase/uart.h>
#include <libbase/console.h>
#include <system.h>

// 初始化 DES 核心
void des_core_init(void) {
    // 复位 DES 核心
    des_core_rst_n_write(0);
    des_core_rst_n_write(1);
    // 关闭 DES 核心
    des_core_start_write(0);
}

// 加密函数
void des_core_encrypt(uint64_t plaintext, uint64_t key, uint64_t *ciphertext) {
    uint64_t key_rd, plaintext_rd, ciphertext_rd;
    uint32_t dat_valid_rd, mode_rd, start_rd;
    
    des_core_start_write(0);

    // 设置密钥
    des_core_key_din_write(key);

    // 设置模式为加密
    des_core_mode_write(DES_MODE_ENCRYPT);

    // 输入明文
    des_core_din_write(plaintext);

    // 启动 DES 核心
    des_core_start_write(1);
    busy_wait(1); // 延时 1 个时间单位
    des_core_start_write(0);


    // //查看数据是否写入
    // key_rd = des_core_key_din_read();
    // plaintext_rd = des_core_din_read();

    // printf("des core have received key: %16llx\n", key_rd);
    // printf("des core have received plaintext: %16llx\n", plaintext_rd);


    // 等待数据有效
    // while (!des_core_dat_valid_read()){
    //     printf("Waiting for data valid\n");
    //     busy_wait(1); // 延时 1 个时间单位
    // }
        

    // 读取密文
    *ciphertext = des_core_dout_read();
}

// 解密函数
void des_core_decrypt(uint64_t ciphertext, uint64_t key, uint64_t *plaintext) {
    // 设置密钥
    des_core_key_din_write(key);

    // 设置模式为解密
    des_core_mode_write(DES_MODE_DECRYPT);

    // 输入密文
    des_core_din_write(ciphertext);

    // 启动 DES 核心
    des_core_start_write(1);

    // 等待数据有效
    while (!des_core_dat_valid_read());

    // 读取明文
    *plaintext = des_core_dout_read();
}