
# Workspace for Arm MCU GCC toolchain
workspace(name = "arm_none_eabi")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Arm Cortex-M4 == armv7e-m

# Apple Silicon host toolchain
# https://developer.arm.com/-/media/Files/downloads/gnu/12.3.rel1/binrel/arm-gnu-toolchain-12.3.rel1-darwin-arm64-arm-none-eabi.tar.xz
http_archive(
    name = "arm_gcc_darwin_arm64",
    urls = ["https://developer.arm.com/-/media/Files/downloads/gnu/12.3.rel1/binrel/arm-gnu-toolchain-12.3.rel1-darwin-arm64-arm-none-eabi.tar.xz"],
    strip_prefix = "arm-gnu-toolchain-12.3.rel1-darwin-arm64-arm-none-eabi",
    sha256 = "3b2eee0bdf71c1bbeb3c3b7424fbf7bd9d5c3f0f5a3a4a78159c9e3ad219e7bd",
    build_file = "//toolchain_arm_gcc:arm_gcc_darwin_arm64.BUILD",
)

register_toolchains(
    "//toolchain_arm_gcc:arm_gcc_darwin_arm64",
)