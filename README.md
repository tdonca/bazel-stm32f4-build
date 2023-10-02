# Bazel STM32F4 MCU Build
Specializing the generic Bazel arm-none-eabi build system for a physical product.
Arm Cortex-M processor, STM32F439ZIT6, built on the Nucleo-144 STM32F439 dev board.

## System Requirements

## Build
- Build with command `bazel build //project:full-project --platforms=//toolchain_arm_gcc --incompatible_enable_cc_toolchain_resolution`