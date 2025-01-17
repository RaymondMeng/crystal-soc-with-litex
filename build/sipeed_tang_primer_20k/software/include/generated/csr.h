//--------------------------------------------------------------------------------
// Auto-generated by LiteX (c1225736a) on 2024-11-11 20:33:27
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
// CSR Includes.
//--------------------------------------------------------------------------------

#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */

#ifndef CSR_BASE
#define CSR_BASE 0xf0000000L
#endif /* ! CSR_BASE */

//--------------------------------------------------------------------------------
// CSR Registers/Fields Definition.
//--------------------------------------------------------------------------------

/* DES_CORE Registers */
#define CSR_DES_CORE_BASE (CSR_BASE + 0x0L)
#define CSR_DES_CORE_DIN_ADDR (CSR_BASE + 0x0L)
#define CSR_DES_CORE_DIN_SIZE 2
#define CSR_DES_CORE_KEY_DIN_ADDR (CSR_BASE + 0x8L)
#define CSR_DES_CORE_KEY_DIN_SIZE 2
#define CSR_DES_CORE_DOUT_ADDR (CSR_BASE + 0x10L)
#define CSR_DES_CORE_DOUT_SIZE 2
#define CSR_DES_CORE_DAT_VALID_ADDR (CSR_BASE + 0x18L)
#define CSR_DES_CORE_DAT_VALID_SIZE 1
#define CSR_DES_CORE_MODE_ADDR (CSR_BASE + 0x1cL)
#define CSR_DES_CORE_MODE_SIZE 1
#define CSR_DES_CORE_START_ADDR (CSR_BASE + 0x20L)
#define CSR_DES_CORE_START_SIZE 1
#define CSR_DES_CORE_RST_N_ADDR (CSR_BASE + 0x24L)
#define CSR_DES_CORE_RST_N_SIZE 1

/* DES_CORE Fields */

/* DHT11 Registers */
#define CSR_DHT11_BASE (CSR_BASE + 0x800L)
#define CSR_DHT11_DHT_DATA_ADDR (CSR_BASE + 0x800L)
#define CSR_DHT11_DHT_DATA_SIZE 1
#define CSR_DHT11_DHT_OE_ADDR (CSR_BASE + 0x804L)
#define CSR_DHT11_DHT_OE_SIZE 1
#define CSR_DHT11_DHT_IN_ADDR (CSR_BASE + 0x808L)
#define CSR_DHT11_DHT_IN_SIZE 1

/* DHT11 Fields */

/* BUTTONS Registers */
#define CSR_BUTTONS_BASE (CSR_BASE + 0x1000L)
#define CSR_BUTTONS_IN_ADDR (CSR_BASE + 0x1000L)
#define CSR_BUTTONS_IN_SIZE 1

/* BUTTONS Fields */

/* CTRL Registers */
#define CSR_CTRL_BASE (CSR_BASE + 0x1800L)
#define CSR_CTRL_RESET_ADDR (CSR_BASE + 0x1800L)
#define CSR_CTRL_RESET_SIZE 1
#define CSR_CTRL_SCRATCH_ADDR (CSR_BASE + 0x1804L)
#define CSR_CTRL_SCRATCH_SIZE 1
#define CSR_CTRL_BUS_ERRORS_ADDR (CSR_BASE + 0x1808L)
#define CSR_CTRL_BUS_ERRORS_SIZE 1

/* CTRL Fields */
#define CSR_CTRL_RESET_SOC_RST_OFFSET 0
#define CSR_CTRL_RESET_SOC_RST_SIZE 1
#define CSR_CTRL_RESET_CPU_RST_OFFSET 1
#define CSR_CTRL_RESET_CPU_RST_SIZE 1

/* DDRPHY Registers */
#define CSR_DDRPHY_BASE (CSR_BASE + 0x2000L)
#define CSR_DDRPHY_DLY_SEL_ADDR (CSR_BASE + 0x2000L)
#define CSR_DDRPHY_DLY_SEL_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_RST_ADDR (CSR_BASE + 0x2004L)
#define CSR_DDRPHY_RDLY_DQ_RST_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_INC_ADDR (CSR_BASE + 0x2008L)
#define CSR_DDRPHY_RDLY_DQ_INC_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_RST_ADDR (CSR_BASE + 0x200cL)
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_RST_SIZE 1
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_ADDR (CSR_BASE + 0x2010L)
#define CSR_DDRPHY_RDLY_DQ_BITSLIP_SIZE 1
#define CSR_DDRPHY_BURSTDET_CLR_ADDR (CSR_BASE + 0x2014L)
#define CSR_DDRPHY_BURSTDET_CLR_SIZE 1
#define CSR_DDRPHY_BURSTDET_SEEN_ADDR (CSR_BASE + 0x2018L)
#define CSR_DDRPHY_BURSTDET_SEEN_SIZE 1

/* DDRPHY Fields */

/* IDENTIFIER_MEM Registers */
#define CSR_IDENTIFIER_MEM_BASE (CSR_BASE + 0x2800L)

/* IDENTIFIER_MEM Fields */

/* LEDS Registers */
#define CSR_LEDS_BASE (CSR_BASE + 0x3000L)
#define CSR_LEDS_OUT_ADDR (CSR_BASE + 0x3000L)
#define CSR_LEDS_OUT_SIZE 1

/* LEDS Fields */

/* SDRAM Registers */
#define CSR_SDRAM_BASE (CSR_BASE + 0x3800L)
#define CSR_SDRAM_DFII_CONTROL_ADDR (CSR_BASE + 0x3800L)
#define CSR_SDRAM_DFII_CONTROL_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_ADDR (CSR_BASE + 0x3804L)
#define CSR_SDRAM_DFII_PI0_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_ADDR (CSR_BASE + 0x3808L)
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI0_ADDRESS_ADDR (CSR_BASE + 0x380cL)
#define CSR_SDRAM_DFII_PI0_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI0_BADDRESS_ADDR (CSR_BASE + 0x3810L)
#define CSR_SDRAM_DFII_PI0_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI0_WRDATA_ADDR (CSR_BASE + 0x3814L)
#define CSR_SDRAM_DFII_PI0_WRDATA_SIZE 2
#define CSR_SDRAM_DFII_PI0_RDDATA_ADDR (CSR_BASE + 0x381cL)
#define CSR_SDRAM_DFII_PI0_RDDATA_SIZE 2
#define CSR_SDRAM_DFII_PI1_COMMAND_ADDR (CSR_BASE + 0x3824L)
#define CSR_SDRAM_DFII_PI1_COMMAND_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_ADDR (CSR_BASE + 0x3828L)
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_SIZE 1
#define CSR_SDRAM_DFII_PI1_ADDRESS_ADDR (CSR_BASE + 0x382cL)
#define CSR_SDRAM_DFII_PI1_ADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI1_BADDRESS_ADDR (CSR_BASE + 0x3830L)
#define CSR_SDRAM_DFII_PI1_BADDRESS_SIZE 1
#define CSR_SDRAM_DFII_PI1_WRDATA_ADDR (CSR_BASE + 0x3834L)
#define CSR_SDRAM_DFII_PI1_WRDATA_SIZE 2
#define CSR_SDRAM_DFII_PI1_RDDATA_ADDR (CSR_BASE + 0x383cL)
#define CSR_SDRAM_DFII_PI1_RDDATA_SIZE 2

/* SDRAM Fields */
#define CSR_SDRAM_DFII_CONTROL_SEL_OFFSET 0
#define CSR_SDRAM_DFII_CONTROL_SEL_SIZE 1
#define CSR_SDRAM_DFII_CONTROL_CKE_OFFSET 1
#define CSR_SDRAM_DFII_CONTROL_CKE_SIZE 1
#define CSR_SDRAM_DFII_CONTROL_ODT_OFFSET 2
#define CSR_SDRAM_DFII_CONTROL_ODT_SIZE 1
#define CSR_SDRAM_DFII_CONTROL_RESET_N_OFFSET 3
#define CSR_SDRAM_DFII_CONTROL_RESET_N_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_OFFSET 0
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_WE_OFFSET 1
#define CSR_SDRAM_DFII_PI0_COMMAND_WE_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_CAS_OFFSET 2
#define CSR_SDRAM_DFII_PI0_COMMAND_CAS_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_RAS_OFFSET 3
#define CSR_SDRAM_DFII_PI0_COMMAND_RAS_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_WREN_OFFSET 4
#define CSR_SDRAM_DFII_PI0_COMMAND_WREN_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_RDEN_OFFSET 5
#define CSR_SDRAM_DFII_PI0_COMMAND_RDEN_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_TOP_OFFSET 6
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_TOP_SIZE 1
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_BOTTOM_OFFSET 7
#define CSR_SDRAM_DFII_PI0_COMMAND_CS_BOTTOM_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_OFFSET 0
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_WE_OFFSET 1
#define CSR_SDRAM_DFII_PI1_COMMAND_WE_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_CAS_OFFSET 2
#define CSR_SDRAM_DFII_PI1_COMMAND_CAS_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_RAS_OFFSET 3
#define CSR_SDRAM_DFII_PI1_COMMAND_RAS_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_WREN_OFFSET 4
#define CSR_SDRAM_DFII_PI1_COMMAND_WREN_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_RDEN_OFFSET 5
#define CSR_SDRAM_DFII_PI1_COMMAND_RDEN_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_TOP_OFFSET 6
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_TOP_SIZE 1
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_BOTTOM_OFFSET 7
#define CSR_SDRAM_DFII_PI1_COMMAND_CS_BOTTOM_SIZE 1

/* TIMER0 Registers */
#define CSR_TIMER0_BASE (CSR_BASE + 0x4000L)
#define CSR_TIMER0_LOAD_ADDR (CSR_BASE + 0x4000L)
#define CSR_TIMER0_LOAD_SIZE 1
#define CSR_TIMER0_RELOAD_ADDR (CSR_BASE + 0x4004L)
#define CSR_TIMER0_RELOAD_SIZE 1
#define CSR_TIMER0_EN_ADDR (CSR_BASE + 0x4008L)
#define CSR_TIMER0_EN_SIZE 1
#define CSR_TIMER0_UPDATE_VALUE_ADDR (CSR_BASE + 0x400cL)
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
#define CSR_TIMER0_VALUE_ADDR (CSR_BASE + 0x4010L)
#define CSR_TIMER0_VALUE_SIZE 1
#define CSR_TIMER0_EV_STATUS_ADDR (CSR_BASE + 0x4014L)
#define CSR_TIMER0_EV_STATUS_SIZE 1
#define CSR_TIMER0_EV_PENDING_ADDR (CSR_BASE + 0x4018L)
#define CSR_TIMER0_EV_PENDING_SIZE 1
#define CSR_TIMER0_EV_ENABLE_ADDR (CSR_BASE + 0x401cL)
#define CSR_TIMER0_EV_ENABLE_SIZE 1

/* TIMER0 Fields */
#define CSR_TIMER0_EV_STATUS_ZERO_OFFSET 0
#define CSR_TIMER0_EV_STATUS_ZERO_SIZE 1
#define CSR_TIMER0_EV_PENDING_ZERO_OFFSET 0
#define CSR_TIMER0_EV_PENDING_ZERO_SIZE 1
#define CSR_TIMER0_EV_ENABLE_ZERO_OFFSET 0
#define CSR_TIMER0_EV_ENABLE_ZERO_SIZE 1

/* UART Registers */
#define CSR_UART_BASE (CSR_BASE + 0x4800L)
#define CSR_UART_RXTX_ADDR (CSR_BASE + 0x4800L)
#define CSR_UART_RXTX_SIZE 1
#define CSR_UART_TXFULL_ADDR (CSR_BASE + 0x4804L)
#define CSR_UART_TXFULL_SIZE 1
#define CSR_UART_RXEMPTY_ADDR (CSR_BASE + 0x4808L)
#define CSR_UART_RXEMPTY_SIZE 1
#define CSR_UART_EV_STATUS_ADDR (CSR_BASE + 0x480cL)
#define CSR_UART_EV_STATUS_SIZE 1
#define CSR_UART_EV_PENDING_ADDR (CSR_BASE + 0x4810L)
#define CSR_UART_EV_PENDING_SIZE 1
#define CSR_UART_EV_ENABLE_ADDR (CSR_BASE + 0x4814L)
#define CSR_UART_EV_ENABLE_SIZE 1
#define CSR_UART_TXEMPTY_ADDR (CSR_BASE + 0x4818L)
#define CSR_UART_TXEMPTY_SIZE 1
#define CSR_UART_RXFULL_ADDR (CSR_BASE + 0x481cL)
#define CSR_UART_RXFULL_SIZE 1

/* UART Fields */
#define CSR_UART_EV_STATUS_TX_OFFSET 0
#define CSR_UART_EV_STATUS_TX_SIZE 1
#define CSR_UART_EV_STATUS_RX_OFFSET 1
#define CSR_UART_EV_STATUS_RX_SIZE 1
#define CSR_UART_EV_PENDING_TX_OFFSET 0
#define CSR_UART_EV_PENDING_TX_SIZE 1
#define CSR_UART_EV_PENDING_RX_OFFSET 1
#define CSR_UART_EV_PENDING_RX_SIZE 1
#define CSR_UART_EV_ENABLE_TX_OFFSET 0
#define CSR_UART_EV_ENABLE_TX_SIZE 1
#define CSR_UART_EV_ENABLE_RX_OFFSET 1
#define CSR_UART_EV_ENABLE_RX_SIZE 1

/* VIDEO_TERMINAL_VTG Registers */
#define CSR_VIDEO_TERMINAL_VTG_BASE (CSR_BASE + 0x5000L)
#define CSR_VIDEO_TERMINAL_VTG_ENABLE_ADDR (CSR_BASE + 0x5000L)
#define CSR_VIDEO_TERMINAL_VTG_ENABLE_SIZE 1
#define CSR_VIDEO_TERMINAL_VTG_HRES_ADDR (CSR_BASE + 0x5004L)
#define CSR_VIDEO_TERMINAL_VTG_HRES_SIZE 1
#define CSR_VIDEO_TERMINAL_VTG_HSYNC_START_ADDR (CSR_BASE + 0x5008L)
#define CSR_VIDEO_TERMINAL_VTG_HSYNC_START_SIZE 1
#define CSR_VIDEO_TERMINAL_VTG_HSYNC_END_ADDR (CSR_BASE + 0x500cL)
#define CSR_VIDEO_TERMINAL_VTG_HSYNC_END_SIZE 1
#define CSR_VIDEO_TERMINAL_VTG_HSCAN_ADDR (CSR_BASE + 0x5010L)
#define CSR_VIDEO_TERMINAL_VTG_HSCAN_SIZE 1
#define CSR_VIDEO_TERMINAL_VTG_VRES_ADDR (CSR_BASE + 0x5014L)
#define CSR_VIDEO_TERMINAL_VTG_VRES_SIZE 1
#define CSR_VIDEO_TERMINAL_VTG_VSYNC_START_ADDR (CSR_BASE + 0x5018L)
#define CSR_VIDEO_TERMINAL_VTG_VSYNC_START_SIZE 1
#define CSR_VIDEO_TERMINAL_VTG_VSYNC_END_ADDR (CSR_BASE + 0x501cL)
#define CSR_VIDEO_TERMINAL_VTG_VSYNC_END_SIZE 1
#define CSR_VIDEO_TERMINAL_VTG_VSCAN_ADDR (CSR_BASE + 0x5020L)
#define CSR_VIDEO_TERMINAL_VTG_VSCAN_SIZE 1

/* VIDEO_TERMINAL_VTG Fields */

//--------------------------------------------------------------------------------
// CSR Registers Access Functions.
//--------------------------------------------------------------------------------

#ifndef LITEX_CSR_ACCESS_FUNCTIONS
#define LITEX_CSR_ACCESS_FUNCTIONS 1
#endif

#if LITEX_CSR_ACCESS_FUNCTIONS

/* DES_CORE Access Functions */
static inline uint64_t des_core_din_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x0L));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0x4L));
	return r;
}
static inline void des_core_din_write(uint64_t v) {
	csr_write_simple(v >> 32, (CSR_BASE + 0x0L));
	csr_write_simple(v, (CSR_BASE + 0x4L));
}
static inline uint64_t des_core_key_din_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x8L));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0xcL));
	return r;
}
static inline void des_core_key_din_write(uint64_t v) {
	csr_write_simple(v >> 32, (CSR_BASE + 0x8L));
	csr_write_simple(v, (CSR_BASE + 0xcL));
}
static inline uint64_t des_core_dout_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x10L));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0x14L));
	return r;
}
static inline uint32_t des_core_dat_valid_read(void) {
	return csr_read_simple((CSR_BASE + 0x18L));
}
static inline uint32_t des_core_mode_read(void) {
	return csr_read_simple((CSR_BASE + 0x1cL));
}
static inline void des_core_mode_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1cL));
}
static inline uint32_t des_core_start_read(void) {
	return csr_read_simple((CSR_BASE + 0x20L));
}
static inline void des_core_start_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x20L));
}
static inline uint32_t des_core_rst_n_read(void) {
	return csr_read_simple((CSR_BASE + 0x24L));
}
static inline void des_core_rst_n_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x24L));
}

/* DHT11 Access Functions */
static inline uint32_t dht11_dht_data_read(void) {
	return csr_read_simple((CSR_BASE + 0x800L));
}
static inline void dht11_dht_data_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x800L));
}
static inline uint32_t dht11_dht_oe_read(void) {
	return csr_read_simple((CSR_BASE + 0x804L));
}
static inline void dht11_dht_oe_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x804L));
}
static inline uint32_t dht11_dht_in_read(void) {
	return csr_read_simple((CSR_BASE + 0x808L));
}

/* BUTTONS Access Functions */
static inline uint32_t buttons_in_read(void) {
	return csr_read_simple((CSR_BASE + 0x1000L));
}

/* CTRL Access Functions */
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple((CSR_BASE + 0x1800L));
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1800L));
}
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple((CSR_BASE + 0x1804L));
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1804L));
}
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple((CSR_BASE + 0x1808L));
}

/* DDRPHY Access Functions */
static inline uint32_t ddrphy_dly_sel_read(void) {
	return csr_read_simple((CSR_BASE + 0x2000L));
}
static inline void ddrphy_dly_sel_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2000L));
}
static inline uint32_t ddrphy_rdly_dq_rst_read(void) {
	return csr_read_simple((CSR_BASE + 0x2004L));
}
static inline void ddrphy_rdly_dq_rst_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2004L));
}
static inline uint32_t ddrphy_rdly_dq_inc_read(void) {
	return csr_read_simple((CSR_BASE + 0x2008L));
}
static inline void ddrphy_rdly_dq_inc_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2008L));
}
static inline uint32_t ddrphy_rdly_dq_bitslip_rst_read(void) {
	return csr_read_simple((CSR_BASE + 0x200cL));
}
static inline void ddrphy_rdly_dq_bitslip_rst_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x200cL));
}
static inline uint32_t ddrphy_rdly_dq_bitslip_read(void) {
	return csr_read_simple((CSR_BASE + 0x2010L));
}
static inline void ddrphy_rdly_dq_bitslip_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2010L));
}
static inline uint32_t ddrphy_burstdet_clr_read(void) {
	return csr_read_simple((CSR_BASE + 0x2014L));
}
static inline void ddrphy_burstdet_clr_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2014L));
}
static inline uint32_t ddrphy_burstdet_seen_read(void) {
	return csr_read_simple((CSR_BASE + 0x2018L));
}

/* IDENTIFIER_MEM Access Functions */

/* LEDS Access Functions */
static inline uint32_t leds_out_read(void) {
	return csr_read_simple((CSR_BASE + 0x3000L));
}
static inline void leds_out_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3000L));
}

/* SDRAM Access Functions */
static inline uint32_t sdram_dfii_control_read(void) {
	return csr_read_simple((CSR_BASE + 0x3800L));
}
static inline void sdram_dfii_control_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3800L));
}
static inline uint32_t sdram_dfii_pi0_command_read(void) {
	return csr_read_simple((CSR_BASE + 0x3804L));
}
static inline void sdram_dfii_pi0_command_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3804L));
}
static inline uint32_t sdram_dfii_pi0_command_issue_read(void) {
	return csr_read_simple((CSR_BASE + 0x3808L));
}
static inline void sdram_dfii_pi0_command_issue_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3808L));
}
static inline uint32_t sdram_dfii_pi0_address_read(void) {
	return csr_read_simple((CSR_BASE + 0x380cL));
}
static inline void sdram_dfii_pi0_address_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x380cL));
}
static inline uint32_t sdram_dfii_pi0_baddress_read(void) {
	return csr_read_simple((CSR_BASE + 0x3810L));
}
static inline void sdram_dfii_pi0_baddress_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3810L));
}
static inline uint64_t sdram_dfii_pi0_wrdata_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x3814L));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0x3818L));
	return r;
}
static inline void sdram_dfii_pi0_wrdata_write(uint64_t v) {
	csr_write_simple(v >> 32, (CSR_BASE + 0x3814L));
	csr_write_simple(v, (CSR_BASE + 0x3818L));
}
static inline uint64_t sdram_dfii_pi0_rddata_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x381cL));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0x3820L));
	return r;
}
static inline uint32_t sdram_dfii_pi1_command_read(void) {
	return csr_read_simple((CSR_BASE + 0x3824L));
}
static inline void sdram_dfii_pi1_command_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3824L));
}
static inline uint32_t sdram_dfii_pi1_command_issue_read(void) {
	return csr_read_simple((CSR_BASE + 0x3828L));
}
static inline void sdram_dfii_pi1_command_issue_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3828L));
}
static inline uint32_t sdram_dfii_pi1_address_read(void) {
	return csr_read_simple((CSR_BASE + 0x382cL));
}
static inline void sdram_dfii_pi1_address_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x382cL));
}
static inline uint32_t sdram_dfii_pi1_baddress_read(void) {
	return csr_read_simple((CSR_BASE + 0x3830L));
}
static inline void sdram_dfii_pi1_baddress_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3830L));
}
static inline uint64_t sdram_dfii_pi1_wrdata_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x3834L));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0x3838L));
	return r;
}
static inline void sdram_dfii_pi1_wrdata_write(uint64_t v) {
	csr_write_simple(v >> 32, (CSR_BASE + 0x3834L));
	csr_write_simple(v, (CSR_BASE + 0x3838L));
}
static inline uint64_t sdram_dfii_pi1_rddata_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x383cL));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0x3840L));
	return r;
}

/* TIMER0 Access Functions */
static inline uint32_t timer0_load_read(void) {
	return csr_read_simple((CSR_BASE + 0x4000L));
}
static inline void timer0_load_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4000L));
}
static inline uint32_t timer0_reload_read(void) {
	return csr_read_simple((CSR_BASE + 0x4004L));
}
static inline void timer0_reload_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4004L));
}
static inline uint32_t timer0_en_read(void) {
	return csr_read_simple((CSR_BASE + 0x4008L));
}
static inline void timer0_en_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4008L));
}
static inline uint32_t timer0_update_value_read(void) {
	return csr_read_simple((CSR_BASE + 0x400cL));
}
static inline void timer0_update_value_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x400cL));
}
static inline uint32_t timer0_value_read(void) {
	return csr_read_simple((CSR_BASE + 0x4010L));
}
static inline uint32_t timer0_ev_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x4014L));
}
static inline uint32_t timer0_ev_pending_read(void) {
	return csr_read_simple((CSR_BASE + 0x4018L));
}
static inline void timer0_ev_pending_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4018L));
}
static inline uint32_t timer0_ev_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x401cL));
}
static inline void timer0_ev_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x401cL));
}

/* UART Access Functions */
static inline uint32_t uart_rxtx_read(void) {
	return csr_read_simple((CSR_BASE + 0x4800L));
}
static inline void uart_rxtx_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4800L));
}
static inline uint32_t uart_txfull_read(void) {
	return csr_read_simple((CSR_BASE + 0x4804L));
}
static inline uint32_t uart_rxempty_read(void) {
	return csr_read_simple((CSR_BASE + 0x4808L));
}
static inline uint32_t uart_ev_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x480cL));
}
static inline uint32_t uart_ev_pending_read(void) {
	return csr_read_simple((CSR_BASE + 0x4810L));
}
static inline void uart_ev_pending_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4810L));
}
static inline uint32_t uart_ev_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x4814L));
}
static inline void uart_ev_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4814L));
}
static inline uint32_t uart_txempty_read(void) {
	return csr_read_simple((CSR_BASE + 0x4818L));
}
static inline uint32_t uart_rxfull_read(void) {
	return csr_read_simple((CSR_BASE + 0x481cL));
}

/* VIDEO_TERMINAL_VTG Access Functions */
static inline uint32_t video_terminal_vtg_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x5000L));
}
static inline void video_terminal_vtg_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x5000L));
}
static inline uint32_t video_terminal_vtg_hres_read(void) {
	return csr_read_simple((CSR_BASE + 0x5004L));
}
static inline void video_terminal_vtg_hres_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x5004L));
}
static inline uint32_t video_terminal_vtg_hsync_start_read(void) {
	return csr_read_simple((CSR_BASE + 0x5008L));
}
static inline void video_terminal_vtg_hsync_start_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x5008L));
}
static inline uint32_t video_terminal_vtg_hsync_end_read(void) {
	return csr_read_simple((CSR_BASE + 0x500cL));
}
static inline void video_terminal_vtg_hsync_end_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x500cL));
}
static inline uint32_t video_terminal_vtg_hscan_read(void) {
	return csr_read_simple((CSR_BASE + 0x5010L));
}
static inline void video_terminal_vtg_hscan_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x5010L));
}
static inline uint32_t video_terminal_vtg_vres_read(void) {
	return csr_read_simple((CSR_BASE + 0x5014L));
}
static inline void video_terminal_vtg_vres_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x5014L));
}
static inline uint32_t video_terminal_vtg_vsync_start_read(void) {
	return csr_read_simple((CSR_BASE + 0x5018L));
}
static inline void video_terminal_vtg_vsync_start_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x5018L));
}
static inline uint32_t video_terminal_vtg_vsync_end_read(void) {
	return csr_read_simple((CSR_BASE + 0x501cL));
}
static inline void video_terminal_vtg_vsync_end_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x501cL));
}
static inline uint32_t video_terminal_vtg_vscan_read(void) {
	return csr_read_simple((CSR_BASE + 0x5020L));
}
static inline void video_terminal_vtg_vscan_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x5020L));
}
#endif /* LITEX_CSR_ACCESS_FUNCTIONS */

#endif /* ! __GENERATED_CSR_H */
