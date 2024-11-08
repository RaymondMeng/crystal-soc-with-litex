set_device -name GW2A-18C GW2A-LV18PG256C8/I7
add_file sipeed_tang_primer_20k.cst
add_file sipeed_tang_primer_20k.sdc
add_file /home/mengcheng/Documents/litedescore/src/counter.v
add_file /home/mengcheng/Documents/litedescore/src/DES_top.v
add_file /home/mengcheng/Documents/litedescore/src/keygen.v
add_file /home/mengcheng/Documents/litedescore/src/mux.v
add_file /home/mengcheng/Documents/litedescore/src/Round.v
add_file /home/mengcheng/Documents/litedescore/src/s_box.v
add_file /home/mengcheng/Documents/litedescore/src/sbox1_lut.v
add_file /home/mengcheng/Documents/litedescore/src/sbox2_lut.v
add_file /home/mengcheng/Documents/litedescore/src/sbox3_lut.v
add_file /home/mengcheng/Documents/litedescore/src/sbox4_lut.v
add_file /home/mengcheng/Documents/litedescore/src/sbox5_lut.v
add_file /home/mengcheng/Documents/litedescore/src/sbox6_lut.v
add_file /home/mengcheng/Documents/litedescore/src/sbox7_lut.v
add_file /home/mengcheng/Documents/litedescore/src/sbox8_lut.v
add_file /home/mengcheng/Documents/litedescore/src/extension.v
add_file /home/mengcheng/Documents/litedescore/src/round_p.v
add_file /home/mengcheng/Documents/litedescore/src/Permutation_init.v
add_file /home/mengcheng/Documents/litedescore/src/Permutation_inverse.v
add_file /home/mengcheng/Documents/pythondata-cpu-vexriscv/pythondata_cpu_vexriscv/verilog/VexRiscv.v
add_file /home/mengcheng/Documents/build/sipeed_tang_primer_20k/gateware/sipeed_tang_primer_20k.v
set_option -use_mspi_as_gpio 1
set_option -use_sspi_as_gpio 1
set_option -use_ready_as_gpio 1
set_option -use_done_as_gpio 1
set_option -rw_check_on_ram 1
run all