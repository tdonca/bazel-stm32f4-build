toolchain(
    name = "arm_gcc_darwin_arm64",
    exec_compatible_with = [
        "@platforms//os:macos",
        "@platforms//cpu:arm64", # Apple silicon Arm64
    ],
    target_compatible_with = [
        "@platforms//cpu:arm", # MCU Cortex-M arm
    ],
    toolchain_type = "@rules_cc//cc:toolchain_type",
    toolchain = "@arm_gcc_darwin_arm64//:cc_toolchain",
)

platform(
    name = "toolchain_arm_gcc",
    constraint_values = [
        "@platforms//cpu:arm",
    ],
)