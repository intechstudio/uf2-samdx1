#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Intech Studio"
#define PRODUCT_NAME "Bootloader 2023-4b"
#define VOLUME_LABEL "GRID23"

#define INDEX_URL "https://github.com/intechstudio/grid-fw/"

#define BOARD_ID "SAMD51N20A-GRID"

#define USB_VID 0x03EB   // Atmel
#define USB_PID 0x2402   // Generic HID device

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD3_TX_PAD2
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA10C_SERCOM0_PAD2
#define BOOT_USART_PAD0                   PINMUX_PA11C_SERCOM0_PAD3

#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW



/* START: NEOPIXEL LED MAGIC*/


#define BOARD_NEOPIXEL_PIN PIN_PB30
#define BOARD_NEOPIXEL_COUNT 16


#define BOARD_NEOPIXEL_POWERPIN PIN_PC14



/* START: Button Activated Bootloader */

#define HOLD_PIN PIN_PC11

#define HOLD_STATE 0
#define HOLD_PIN_PULLUP

/* END OF: Button Activated Bootloader */



#endif