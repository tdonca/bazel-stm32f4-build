filegroup(
    name = "all",
    srcs = glob(["**/*",]),
)

# Define the new toolchain config
cc_toolchain(
    name = "cc_toolchain",
    all_files = ":all",
    ar_files = ":all",
    as_files = ":all",
    compiler_files = ":all",
    dwp_files = ":all",
    linker_files = ":all",
    objcopy_files = ":all",
    strip_files = ":all",
    static_runtime_lib = ":all",
    toolchain_config = ":my_cc_toolchain_config",
)

# ??? Is this relevant for macos?
load("@bazel_tools//tools/cpp:unix_cc_toolchain_config.bzl", "cc_toolchain_config")


cc_toolchain_config(
    name = "my_cc_toolchain_config",
    cpu = "arm",
    compiler = "gcc",
    toolchain_identifier = "arm_none_eabi_darwin_arm64",
    host_system_name = "darwin_arm64", #???
    target_system_name = "arm-none-eabi",
    target_libc = "gcc",
    abi_version = "eabi",
    abi_libc_version = "unknown", #???
    tool_paths = {
        "gcc": "bin/arm-none-eabi-g++",
        "cpp": "bin/arm-none-eabi-cpp",
        "ar": "bin/arm-none-eabi-ar",
        "nm": "bin/arm-none-eabi-nm",
        "ld": "bin/arm-none-eabi-ld",
        "as": "bin/arm-none-eabi-as",
        "objcopy": "bin/arm-none-eabi-objcopy",
        "objdump": "bin/arm-none-eabi-objdump",
        "gcov": "bin/arm-none-eabi-gcov", #??? does not exist
        "strip": "bin/arm-none-eabi-strip",
        "llvm-cov": "/bin/false", #??? does not exist
    },
    compile_flags = [
        "-isystem", "external/arm_gcc_darwin_arm64/arm-none-eabi/include/c++/12.3.1/arm-none-eabi",
        "-isystem", "external/arm_gcc_darwin_arm64/arm-none-eabi/include/c++/12.3.1",
        "-isystem", "external/arm_gcc_darwin_arm64/arm-none-eabi/include",
        "-isystem", "external/arm_gcc_darwin_arm64/arm-none-eabi/libc/usr/include",
        "-isystem", "external/arm_gcc_darwin_arm64/lib/gcc/arm-none-eabi/12.3.1/include",
        "--specs=nosys.specs",
    ],
    link_flags = ["--specs=nosys.specs",],
)

