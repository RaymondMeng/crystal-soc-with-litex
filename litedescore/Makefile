VERILOG=iverilog

TB = DES_top

TB_FILE = des

TB_DIR 	   = sim
VSRC_DIR   = src

#VSRC = $(shell find $(PWD)/$(VSRC_DIR) -name "*.v")
run:
	$(VERILOG) $(TB_DIR)/$(TB)_tb.v	-y $(PWD)/$(VSRC_DIR) -o $(TB_FILE)
	vvp -n $(TB_FILE) -lxt2
	
gtk:
	gtkwave $(TB)_tb.vcd

clean:
	rm $(TB_FILE)
	rm *.vcd

