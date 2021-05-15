; vim: ft=asm
.stm8

; MCU family selection
.define STM8S003
.define STM8_VALUE_LINE
.define STM8_LOW_DENSITY

; Optional peripherals
.define STM8_HAS_ADC1
.define STM8_HAS_BEEP
.define STM8_HAS_TIM2
.define STM8_HAS_TIM4
.define STM8_HAS_UART1

.include "chips/stm8s.inc"
