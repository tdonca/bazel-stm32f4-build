# Bazel STM32F4 MCU Build
Specializing the generic Bazel arm-none-eabi build system for a physical product.  
Arm Cortex-M processor, STM32F439ZIT6, built on the Nucleo-144 STM32F439 dev board.

## System Requirements
- Mac OS Apple Silicon

## Build
- Build with command 
```
bazel build //project:full-project --platforms=//toolchain_arm_gcc --incompatible_enable_cc_toolchain_resolution --sandbox_debug
```
Current successful build output:
```
Memory region         Used Size  Region Size  %age Used
          CCMRAM:          0 GB        64 KB      0.00%
             RAM:        4064 B       192 KB      2.07%
           FLASH:       42744 B         2 MB      2.04%
Target //project:full-project up-to-date:
  bazel-bin/project/full-project
INFO: Elapsed time: 9.143s, Critical Path: 1.98s
INFO: 36 processes: 4 internal, 32 darwin-sandbox.
INFO: Build completed successfully, 36 total actions
```

## Resources
- GCC Linker: https://ftp.gnu.org/old-gnu/Manuals/ld-2.9.1/html_node/ld_3.html
- https://metebalci.com/blog/demystifying-arm-gnu-toolchain-specs-nano-and-nosys/
- https://interrupt.memfault.com/blog/get-the-most-out-of-the-linker-map-file

Sandbox debug:
- https://bazel.build/docs/sandboxing
- Save linker MAP file: https://stackoverflow.com/questions/54543744/how-to-avoid-deleting-cached-files-after-build-in-bazel

