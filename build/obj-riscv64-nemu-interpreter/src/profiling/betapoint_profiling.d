cmd_/home/user/ecpt/work/simpoint_nemu/build/obj-riscv64-nemu-interpreter/src/profiling/betapoint_profiling.opp := unused

source_/home/user/ecpt/work/simpoint_nemu/build/obj-riscv64-nemu-interpreter/src/profiling/betapoint_profiling.opp := src/profiling/betapoint_profiling.cpp

deps_/home/user/ecpt/work/simpoint_nemu/build/obj-riscv64-nemu-interpreter/src/profiling/betapoint_profiling.opp := \
    $(wildcard include/config/msize.h) \
  /home/user/ecpt/work/simpoint_nemu/include/profiling/betapoint_profiling.h \
  /home/user/ecpt/work/simpoint_nemu/include/profiling/ppm.h \
  /home/user/ecpt/work/simpoint_nemu/include/common.h \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/isa64.h) \
  /home/user/ecpt/work/simpoint_nemu/include/generated/bbv.autoconf.h \
    $(wildcard include/config/isa/riscv64.h) \
    $(wildcard include/config/difftest/ref/name.h) \
    $(wildcard include/config/engine.h) \
    $(wildcard include/config/vga/size/400x300.h) \
    $(wildcard include/config/vga/ctl/port.h) \
    $(wildcard include/config/vga/show/screen.h) \
    $(wildcard include/config/pc/reset/offset.h) \
    $(wildcard include/config/has/port/io.h) \
    $(wildcard include/config/rtc/mmio.h) \
    $(wildcard include/config/uartlite/port.h) \
    $(wildcard include/config/sdcard/ctl/mmio.h) \
    $(wildcard include/config/rv/svinval.h) \
    $(wildcard include/config/enable/instr/cnt.h) \
    $(wildcard include/config/cc/o2.h) \
    $(wildcard include/config/perf/opt.h) \
    $(wildcard include/config/device.h) \
    $(wildcard include/config/has/keyboard.h) \
    $(wildcard include/config/mode/system.h) \
    $(wildcard include/config/has/uartlite.h) \
    $(wildcard include/config/has/sdcard.h) \
    $(wildcard include/config/ilen/min.h) \
    $(wildcard include/config/bbl/offset/with/cpt.h) \
    $(wildcard include/config/tcache/size.h) \
    $(wildcard include/config/cc/lto.h) \
    $(wildcard include/config/fb/addr.h) \
    $(wildcard include/config/has/vga.h) \
    $(wildcard include/config/rvb.h) \
    $(wildcard include/config/uartlite/mmio.h) \
    $(wildcard include/config/has/timer.h) \
    $(wildcard include/config/bb/list/size.h) \
    $(wildcard include/config/timer/gettimeofday.h) \
    $(wildcard include/config/fpu/soft.h) \
    $(wildcard include/config/engine/interpreter.h) \
    $(wildcard include/config/rtc/port.h) \
    $(wildcard include/config/sdcard/img/path.h) \
    $(wildcard include/config/cc/opt.h) \
    $(wildcard include/config/i8042/data/port.h) \
    $(wildcard include/config/rt/check.h) \
    $(wildcard include/config/ac/soft.h) \
    $(wildcard include/config/rv/pmp/csr.h) \
    $(wildcard include/config/i8042/data/mmio.h) \
    $(wildcard include/config/rvk.h) \
    $(wildcard include/config/cc.h) \
    $(wildcard include/config/clint/mmio.h) \
    $(wildcard include/config/difftest/ref/path.h) \
    $(wildcard include/config/mem/compress.h) \
    $(wildcard include/config/cc/gcc.h) \
    $(wildcard include/config/isa.h) \
    $(wildcard include/config/vga/ctl/mmio.h) \
    $(wildcard include/config/use/mmap.h) \
    $(wildcard include/config/bb/pool/size.h) \
  /home/user/ecpt/work/simpoint_nemu/include/macro.h \
  /home/user/ecpt/work/simpoint_nemu/include/debug.h \
    $(wildcard include/config/memlog.h) \
    $(wildcard include/config/translog.h) \
    $(wildcard include/config/trace/inst.h) \
    $(wildcard include/config/trace/inst/dasm.h) \
    $(wildcard include/config/trace/bb.h) \
    $(wildcard include/config/beta/log.h) \
    $(wildcard include/config/exitlog.h) \
    $(wildcard include/config/memprof/log.h) \
    $(wildcard include/config/ctrlprof/log.h) \
    $(wildcard include/config/simpoint/log.h) \
  /home/user/ecpt/work/simpoint_nemu/include/utils.h \
    $(wildcard include/config/debug.h) \
  /home/user/ecpt/work/simpoint_nemu/include/checkpoint/cpt_env.h \
  resource/lz4/lib/lz4.h \
  resource/zstd/lib/zstd.h \
  resource/CRoaring/include/roaring/roaring.h \
  resource/CRoaring/include/roaring/memory.h \
  resource/CRoaring/include/roaring/roaring_types.h \
  resource/CRoaring/include/roaring/roaring_version.h \
  resource/zstd/lib/compress/zstd_compress_internal.h \
  resource/zstd/lib/compress/../common/zstd_internal.h \
  resource/zstd/lib/compress/../common/compiler.h \
  resource/zstd/lib/compress/../common/portability_macros.h \
  resource/zstd/lib/compress/../common/cpu.h \
  resource/zstd/lib/compress/../common/mem.h \
  resource/zstd/lib/compress/../common/debug.h \
  resource/zstd/lib/compress/../common/zstd_deps.h \
  resource/zstd/lib/compress/../common/error_private.h \
  resource/zstd/lib/compress/../common/../zstd_errors.h \
  resource/zstd/lib/compress/../common/../zstd.h \
  resource/zstd/lib/compress/../common/fse.h \
  resource/zstd/lib/compress/../common/bitstream.h \
  resource/zstd/lib/compress/../common/bits.h \
  resource/zstd/lib/compress/../common/huf.h \
  resource/zstd/lib/compress/../common/xxhash.h \
  resource/zstd/lib/compress/../common/zstd_trace.h \
  resource/zstd/lib/compress/zstd_cwksp.h \
  resource/zstd/lib/compress/../common/bits.h \

/home/user/ecpt/work/simpoint_nemu/build/obj-riscv64-nemu-interpreter/src/profiling/betapoint_profiling.opp: $(deps_/home/user/ecpt/work/simpoint_nemu/build/obj-riscv64-nemu-interpreter/src/profiling/betapoint_profiling.opp)

$(deps_/home/user/ecpt/work/simpoint_nemu/build/obj-riscv64-nemu-interpreter/src/profiling/betapoint_profiling.opp):
