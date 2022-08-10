deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	src/isa/riscv64/Kconfig \
	src/isa/x86/Kconfig \
	/home/e0005120/lico/simpoint_nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
