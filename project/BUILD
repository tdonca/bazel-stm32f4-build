

cc_binary(
    name = "full-project",
    srcs = [
        "Core/Startup/startup_stm32f439zitx.s",
        # "Core/Inc/main.h",
        "Core/Src/main.c",
        "Core/Src/eth.c",
        "Core/Src/gpio.c",
        "Core/Src/stm32f4xx_hal_msp.c",
        "Core/Src/stm32f4xx_it.c",
        "Core/Src/syscalls.c",
        "Core/Src/sysmem.c",
        "Core/Src/system_stm32f4xx.c",
        "Core/Src/usart.c",
        "Core/Src/usb_otg.c",
        # "Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_eth.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_exti.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pcd_ex.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pcd.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c",
        "Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_usb.c",

    ] + glob(["**/*.h"]),
    includes = [
        "Core/Inc",
        "Drivers/STM32F4xx_HAL_Driver/Inc",
        "Drivers/STM32F4xx_HAL_Driver/Inc/Legacy",
        "Drivers/CMSIS/Device/ST/STM32F4xx/Include",
        "Drivers/CMSIS/Include",
    ],
    copts = [
        "-std=gnu11", 
        # "-std=gnu++17",
        "-Wall",
        "-Wextra",
        "-Wsign-conversion",
        "-g3",
        "-Og",
        "-DDEBUG",
        "-DUSE_HAL_DRIVER",
    ],
    additional_linker_inputs = [
        "//stm32f4329zitx_linker:linker-scripts",
    ],
    linkopts = [
        "-Tstm32f4329zitx_linker/STM32F439ZITX_FLASH.ld", # linker script for specific MCU model
        "-Wl,-Map=Application.map", # generate map file output
        "-Wl,--print-memory-usage", # print out memory usage after linking
    ]
    # copts = [ # Ah! to fix this, the include paths need to be relative to the WORKSPACE file, not the BUILD file
    #     "-ICore/Inc",
    #     "-IDrivers/STM32F4xx_HAL_Driver/Inc",
    #     "-IDrivers/STM32F4xx_HAL_Driver/Inc/Legacy",
    #     "-IDrivers/CMSIS/Device/ST/STM32F4xx/Include",
    #     "-IDrivers/CMSIS/Include",
    # ],
)