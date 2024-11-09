BUILD_DIR?=../build/

include $(BUILD_DIR)/software/include/generated/variables.mak
include $(SOC_DIRECTORY)/software/common.mak

OBJECTS   = donut.o helloc.o crt0.o main.o
ifdef WITH_CXX
	OBJECTS += hellocpp.o
	CFLAGS += -DWITH_CXX
endif


all:  demo.bin 

# liblitedescore.a: des_core.o
# 	$(AR) crs liblitedescore.a des_core.o

# -Wl,--whole-archive \

%.bin: %.elf
	$(OBJCOPY) -O binary $< $@
ifneq ($(OS),Windows_NT)
	chmod -x $@
endif

vpath %.a $(PACKAGES:%=../%)

demo.elf: $(OBJECTS)
	$(CC) $(LDFLAGS) -T linker.ld -N -o $@ \
		$(OBJECTS) \
		$(PACKAGES:%=-L$(BUILD_DIR)/software/%) \
		-Wl,--gc-sections \
		-Wl,--whole-archive \
		-Wl,-Map,$@.map \
		$(LIBS:lib%=-l%)

ifneq ($(OS),Windows_NT)
	chmod -x $@
endif

# pull in dependency info for *existing* .o files
-include $(OBJECTS:.o=.d)

donut.o: CFLAGS   += -w

VPATH = $(BIOS_DIRECTORY):$(BIOS_DIRECTORY)/cmds:$(CPU_DIRECTORY)

#C++
%.o: %.cpp
	$(compilexx)
#C
%.o: %.c
	$(compile)
#汇编
%.o: %.S
	$(assemble)

clean:
	$(RM) $(OBJECTS) demo.elf demo.bin .*~ *~

.PHONY: all clean
