// SPDX-License-Identifier: zlib-acknowledgement

// TODO(Ryan): Why arm used in embedded?
#pragma once // Easier and supported?

typedef uint32_t u32;
typedef volatile u32 reg32;

void
kernel_main(void)
{
  uart_init();
  uart_send_string("hello world!\n");
}
