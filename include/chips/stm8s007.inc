; vim: ft=asm
.stm8

; MCU family selection
.define STM8S007
.define STM8_VALUE_LINE
.define STM8_HIGH_DENSITY

; Optional peripherals
.define STM8_HAS_ADC2
.define STM8_HAS_BEEP
.define STM8_HAS_PORT_G
.define STM8_HAS_PORT_H
.define STM8_HAS_PORT_I
.define STM8_HAS_TIM2
.define STM8_HAS_TIM3
.define STM8_HAS_TIM4
.define STM8_HAS_UART1
.define STM8_HAS_UART3

.include "chips/stm8s.inc"
