# Glob all gnu arm-none-eabi toolchain files
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

# This toolchain config is specialized to a specific target platform
# In our case, this is the STM32F439ZIT6 arm processor
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
        # "gcc": "bin/arm-none-eabi-g++", # this should be for C compilation
        "gcc": "bin/arm-none-eabi-gcc", # C compiler
        "cpp": "bin/arm-none-eabi-cpp", # C++ compiler
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
        "-mcpu=cortex-m4",
        "-mfpu=fpv4-sp-d16",
        "-mfloat-abi=hard", 
        "-mthumb", 
        "--specs=nano.specs",
        "-DSTM32F439xx",
        #"-x assembler-with-cpp", # How to deal with assembly file?
        "-fstack-usage",
        "-MMD",
        "-MP",
        "-isystem", "external/arm_gcc_darwin_arm64/arm-none-eabi/include/c++/12.3.1/arm-none-eabi",
        "-isystem", "external/arm_gcc_darwin_arm64/arm-none-eabi/include/c++/12.3.1",
        "-isystem", "external/arm_gcc_darwin_arm64/arm-none-eabi/include",
        "-isystem", "external/arm_gcc_darwin_arm64/arm-none-eabi/libc/usr/include",
        "-isystem", "external/arm_gcc_darwin_arm64/lib/gcc/arm-none-eabi/12.3.1/include",
    ],
    link_flags = [
        "-mcpu=cortex-m4",
        "-mfpu=fpv4-sp-d16", 
        "-mfloat-abi=hard", 
        "-mthumb", 
        "--specs=nano.specs",
        # "--specs=nosys.specs",
        "-static",
        # "--specs=nosys.specs",
    ],
)

