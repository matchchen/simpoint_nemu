NAME = ecpt

BUILD_DIR ?= ./build

OBJ_DIR ?= $(BUILD_DIR)/obj
BINARY ?= $(BUILD_DIR)/$(NAME)

.DEFAULT_GOAL = app

CPU_ARCH :=

# Compilation flags
#CROSS_COMPILE = riscv64-unknown-linux-gnu-
CROSS_COMPILE = riscv64-unknown-elf-
CC = $(CROSS_COMPILE)gcc
LD = $(CROSS_COMPILE)ld
OBJDUMP = $(CROSS_COMPILE)objdump
OBJCOPY = $(CROSS_COMPILE)objcopy
INCLUDES  = $(addprefix -I, $(INC_DIR))
CFLAGS   += -fno-PIE -mcmodel=medany -O2 -MMD -Wall -Werror $(INCLUDES)
LINK_SCRIPT = restore.lds

ifneq (${CPU_ARCH}, NEMU_SIM)
  CFLAGS += -DNEMU_SIM=1
  LINK_SCRIPT = restore_sim_rtl.lds
endif

# Files to be compiled
SRCS = $(shell find src/ -name "*.[cS]")
OBJS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(basename $(SRCS))))

# Compilation patterns
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@) && echo + CC $<
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: %.S
	@mkdir -p $(dir $@) && echo + AS $<
	$(CC) $(CFLAGS) -c -o $@ $<


# Depencies
-include $(OBJS:.o=.d)

$(BINARY): $(OBJS)
	@echo + LD $@
	$(LD) -O2 -T $(LINK_SCRIPT) -o $@ $^
	@$(OBJDUMP) -S $@ > $@.txt
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $@ $@.bin

app: $(BINARY)

clean:
	-rm -rf $(BUILD_DIR)
