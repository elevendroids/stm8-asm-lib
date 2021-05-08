.stm8

;
; GPIO
;
PA_ODR      equ 0x5000 ; Port A data output latch register
PA_IDR      equ 0x5001 ; Port A input pin value register
PA_DDR      equ 0x5002 ; Port A data direction register
PA_CR1      equ 0x5003 ; Port A control register 1
PA_CR2      equ 0x5004 ; Port A control register 2

PB_ODR      equ 0x5005 ; Port B data output latch register
PB_IDR      equ 0x5006 ; Port B input pin value register
PB_DDR      equ 0x5007 ; Port B data direction register
PB_CR1      equ 0x5008 ; Port B control register 1
PB_CR2      equ 0x5009 ; Port B control register 2

PC_ODR      equ 0x500A ; Port C data output latch register
PC_IDR      equ 0x500B ; Port C input pin value register
PC_DDR      equ 0x500C ; Port C data direction register
PC_CR1      equ 0x500D ; Port C control register 1
PC_CR2      equ 0x500E ; Port C control register 2

PD_ODR      equ 0x500F ; Port D data output latch register
PD_IDR      equ 0x5010 ; Port D input pin value register
PD_DDR      equ 0x5011 ; Port D data direction register
PD_CR1      equ 0x5012 ; Port D control register 1
PD_CR2      equ 0x5013 ; Port D control register 2

PE_ODR      equ 0x5014 ; Port E data output latch register
PE_IDR      equ 0x5015 ; Port E input pin value register
PE_DDR      equ 0x5016 ; Port E data direction register
PE_CR1      equ 0x5017 ; Port E control register 1
PE_CR2      equ 0x5018 ; Port E control register 2

PF_ODR      equ 0x5019 ; Port F data output latch register
PF_IDR      equ 0x501A ; Port F input pin value register
PF_DDR      equ 0x501B ; Port F data direction register
PF_CR1      equ 0x501C ; Port F control register 1
PF_CR2      equ 0x501D ; Port F control register 2
.ifdef STM8_HAS_PORT_G
PG_ODR      equ 0x501E ; Port G data output latch register
PG_IDR      equ 0x501F ; Port G input pin value register
PG_DDR      equ 0x5020 ; Port G data direction register
PG_CR1      equ 0x5021 ; Port G control register 1
PG_CR2      equ 0x5022 ; Port G control register 2
.endif
.ifdef STM8_HAS_PORT_H
PH_ODR      equ 0x5023 ; Port H data output latch register
PH_IDR      equ 0x5024 ; Port H input pin value register
PH_DDR      equ 0x5025 ; Port H data direction register
PH_CR1      equ 0x5026 ; Port H control register 1
PH_CR2      equ 0x5027 ; Port H control register 2
.endif
.ifdef STM8_HAS_PORT_I
PI_ODR      equ 0x5028 ; Port I data output latch register
PI_IDR      equ 0x5029 ; Port I input pin value register
PI_DDR      equ 0x502A ; Port I data direction register
PI_CR1      equ 0x502B ; Port I control register 1
PI_CR2      equ 0x502C ; Port I control register 2
.endif

;
; FLASH
;
FLASH_CR1   equ 0x505A ; Flash control register 1
FLASH_CR2   equ 0x505B ; Flash control register 2
FLASH_NCR2  equ 0x505C ; Flash complementary control register 2
FLASH_FPR   equ 0x505D ; Flash protection register
FLASH_NFPR  equ 0x505E ; Flash complementary protection register
FLASH_IAPSR equ 0x505F ; Flash in-application programming status register
FLASH_PUKR  equ 0x5062 ; Flash program memory unprotection register
FLASH_DUKR  equ 0x5064 ; Data EEPROM unprotection register

;
; ITC
;
EXTI_CR1    equ 0x50A0 ; External interrupt control register 1
EXTI_CR2    equ 0x50A1 ; External interrupt control register 2

;
; RST
;
RST_SR      equ 0x50B3 ; Reset status register

;
; CLK
;
CLK_ICKR        equ 0x50C0 ; Internal clock control register
CLK_ECKR        equ 0x50C1 ; External clock control register
CLK_CMSR        equ 0x50C3 ; Clock master status register
CLK_SWR         equ 0x50C4 ; Clock master switch register
CLK_SWCR        equ 0x50C5 ; Clock switch control register
CLK_CKDIVR      equ 0x50C6 ; Clock divider register
CLK_PCKENR1     equ 0x50C7 ; Peripheral clock gating register 1
CLK_CSSR        equ 0x50C8 ; Clock security system register
CLK_CCOR        equ 0x50C9 ; Configurable clock control register
CLK_PCKENR2     equ 0x50CA ; Peripheral clock gating register 2
.ifdef STM8_HAS_CAN
CLK_CANCCR      equ 0x50CB ; CAN clock control register
.endif
CLK_HSITRIMR    equ 0x50CC ; HSI clock calibration trimming register
CLK_SWIMCCR     equ 0x50CD ; SWIM clock control register

;
; WWDG
;
WWDG_CR     equ 0x50D1 ; WWDG control register
WWDG_WR     equ 0x50D2 ; WWDG window register

;
; IWDG
;
IWDG_KR     equ 0x50E0 ; IWDG key register
IWDG_PR     equ 0x50E1 ; IWDG prescaler register
IWDG_RLR    equ 0x50E2 ; IWDG reload register

;
; AWU
;
AWU_CSR     equ 0x50F0 ; AWU control/status register 1
AWU_APR     equ 0x50F1 ; AWU asynchronous prescaler buffer register
AWU_TBR     equ 0x50F2 ; AWU timebase selection register

;
; BEEP
;
.ifdef STM8_HAS_BEEP
BEEP_CSR    equ 0x50F3 ; BEEP control/status register
.endif

;
; SPI
;
SPI_CR1     equ 0x5200 ; SPI control register 1
SPI_CR2     equ 0x5201 ; SPI control register 2
SPI_ICR     equ 0x5202 ; SPI interrupt control register
SPI_SR      equ 0x5203 ; SPI status register
SPI_DR      equ 0x5204 ; SPI data register
SPI_CRCPR   equ 0x5205 ; SPI CRC polynomial register
SPI_RXCRCR  equ 0x5206 ; SPI Rx CRC register
SPI_TXCRCR  equ 0x5207 ; SPI Tx CRC register

;
; I2C
;
I2C_CR1     equ 0x5210 ; I2C control register 1
I2C_CR2     equ 0x5211 ; I2C control register 2
I2C_FREQR   equ 0x5212 ; I2C frequency register
I2C_OARL    equ 0x5213 ; I2C own address register low
I2C_OARH    equ 0x5214 ; I2C own address register high
I2C_DR      equ 0x5216 ; I2C data register
I2C_SR1     equ 0x5217 ; I2C status register 1
I2C_SR2     equ 0x5218 ; I2C status register 2
I2C_SR3     equ 0x5219 ; I2C status register 3
I2C_ITR     equ 0x521A ; I2C interrupt control register
I2C_CCRL    equ 0x521B ; I2C clock control register low
I2C_CCRH    equ 0x521C ; I2C clock control register high
I2C_TRISER  equ 0x521D ; I2C TRISE registerr
I2C_PECR    equ 0x521E ; I2C packet error checking register

;
; UART1
;
.ifdef STM8_HAS_UART1
UART1_SR    equ 0x5230 ; UART1 status register
UART1_DR    equ 0x5231 ; UART1 data register
UART1_BRR1  equ 0x5232 ; UART1 baud rate register 1
UART1_BRR2  equ 0x5233 ; UART1 baud rate register 2
UART1_CR1   equ 0x5234 ; UART1 control register 1
UART1_CR2   equ 0x5235 ; UART1 control register 2
UART1_CR3   equ 0x5236 ; UART1 control register 3
UART1_CR4   equ 0x5237 ; UART1 control register 4
UART1_CR5   equ 0x5238 ; UART1 control register 5
UART1_GTR   equ 0x5239 ; UART1 guard time register
UART1_PSCR  equ 0x523A ; UART1 prescaler register
.endif

;
; UART2
;
.ifdef STM8_HAS_UART2
UART2_SR    equ 0x5240 ; UART2 status register
UART2_DR    equ 0x5241 ; UART2 data register
UART2_BRR1  equ 0x5242 ; UART2 baud rate register 1
UART2_BRR2  equ 0x5243 ; UART2 baud rate register 2
UART2_CR1   equ 0x5244 ; UART2 control register 1
UART2_CR2   equ 0x5245 ; UART2 control register 2
UART2_CR3   equ 0x5246 ; UART2 control register 3
UART2_CR4   equ 0x5247 ; UART2 control register 4
UART2_CR5   equ 0x5248 ; UART2 control register 5
UART2_CR6   equ 0x5249 ; UART2 control register 6
UART2_GTR   equ 0x524A ; UART2 guard time register
UART2_PSCR  equ 0x524B ; UART2 prescaler register
.endif

;
; UART3
;
.ifdef STM8_HAS_UART3
UART3_SR    equ 0x5240 ; UART3 status register
UART3_DR    equ 0x5241 ; UART3 data register
UART3_BRR1  equ 0x5242 ; UART3 baud rate register 1
UART3_BRR2  equ 0x5243 ; UART3 baud rate register 2
UART3_CR1   equ 0x5244 ; UART3 control register 1
UART3_CR2   equ 0x5245 ; UART3 control register 2
UART3_CR3   equ 0x5246 ; UART3 control register 3
UART3_CR4   equ 0x5247 ; UART3 control register 4
UART3_CR6   equ 0x5249 ; UART3 control register 6
.endif

;
; TIM1
;
TIM1_CR1    equ 0x5250 ; TIM1 control register 1
TIM1_CR2    equ 0x5251 ; TIM1 control register 2
TIM1_SMCR   equ 0x5252 ; TIM1 slave mode control register
TIM1_ETR    equ 0x5253 ; TIM1 external trigger register
TIM1_IER    equ 0x5254 ; TIM1 interrupt enable register
TIM1_SR1    equ 0x5255 ; TIM1 status register 1
TIM1_SR2    equ 0x5256 ; TIM1 status register 2
TIM1_EGR    equ 0x5257 ; TIM1 event generation register
TIM1_CCMR1  equ 0x5258 ; TIM1 capture/compare mode register 1
TIM1_CCMR2  equ 0x5259 ; TIM1 capture/compare mode register 2
TIM1_CCMR3  equ 0x525A ; TIM1 capture/compare mode register 3
TIM1_CCMR4  equ 0x525B ; TIM1 capture/compare mode register 4
TIM1_CCER1  equ 0x525C ; TIM1 capture/compare enable register 1
TIM1_CCER2  equ 0x525D ; TIM1 capture/compare enable register 2
TIM1_CNTRH  equ 0x525E ; TIM1 counter high
TIM1_CNTRL  equ 0x525F ; TIM1 counter low
TIM1_PSCRH  equ 0x5260 ; TIM1 prescaler register high
TIM1_PSCRL  equ 0x5261 ; TIM1 prescaler register low
TIM1_ARRH   equ 0x5262 ; TIM1 auto-reload register high
TIM1_ARRL   equ 0x5263 ; TIM1 auto-reload register low
TIM1_RCR    equ 0x5264 ; TIM1 repetition counter register
TIM1_CCR1H  equ 0x5265 ; TIM1 capture/compare register 1 high
TIM1_CCR1L  equ 0x5266 ; TIM1 capture/compare register 1 low
TIM1_CCR2H  equ 0x5267 ; TIM1 capture/compare register 2 high
TIM1_CCR2L  equ 0x5268 ; TIM1 capture/compare register 2 low
TIM1_CCR3H  equ 0x5269 ; TIM1 capture/compare register 3 high
TIM1_CCR3L  equ 0x526A ; TIM1 capture/compare register 3 low
TIM1_CCR4H  equ 0x526B ; TIM1 capture/compare register 4 high
TIM1_CCR4L  equ 0x526C ; TIM1 capture/compare register 4 low
TIM1_BKR    equ 0x526D ; TIM1 break register
TIM1_DTR    equ 0x526E ; TIM1 dead-time register
TIM1_OISR   equ 0x526F ; TIM1 output idle state register

;
; TIM2
;
.ifdef STM8_HAS_TIM2
TIM2_CR1    equ 0x5300 ; TIM2 control register 1
.ifdef STM8_LOW_DENSITY
TIM2_IER    equ 0x5303 ; TIM2 interrupt enable register
TIM2_SR1    equ 0x5304 ; TIM2 status register 1
TIM2_SR2    equ 0x5305 ; TIM2 status register 2
TIM2_EGR    equ 0x5306 ; TIM2 event generation register
TIM2_CCMR1  equ 0x5307 ; TIM2 capture/compare mode register 1
TIM2_CCMR2  equ 0x5308 ; TIM2 capture/compare mode register 2
TIM2_CCMR3  equ 0x5309 ; TIM2 capture/compare mode register 3
TIM2_CCER1  equ 0x530A ; TIM2 capture/compare enable register 1
TIM2_CCER2  equ 0x530B ; TIM2 capture/compare enable register 2
TIM2_CNTRH  equ 0x530C ; TIM2 counter high
TIM2_CNTRL  equ 0x530D ; TIM2 counter low
TIM2_PSCR   equ 0x530E ; TIM2 prescaler register
TIM2_ARRH   equ 0x530F ; TIM2 auto-reload register high
TIM2_ARRL   equ 0x5310 ; TIM2 auto-reload register low
TIM2_CCR1H  equ 0x5311 ; TIM2 capture/compare register 1 high
TIM2_CCR1L  equ 0x5312 ; TIM2 capture/compare register 1 low
TIM2_CCR2H  equ 0x5313 ; TIM2 capture/compare register 2 high
TIM2_CCR2L  equ 0x5314 ; TIM2 capture/compare register 2 low
TIM2_CCR3H  equ 0x5315 ; TIM2 capture/compare register 3 high
TIM2_CCR3L  equ 0x5316 ; TIM2 capture/compare register 3 low
.else
TIM2_IER    equ 0x5301 ; TIM2 interrupt enable register
TIM2_SR1    equ 0x5302 ; TIM2 status register 1
TIM2_SR2    equ 0x5303 ; TIM2 status register 2
TIM2_EGR    equ 0x5304 ; TIM2 event generation register
TIM2_CCMR1  equ 0x5305 ; TIM2 capture/compare mode register 1
TIM2_CCMR2  equ 0x5306 ; TIM2 capture/compare mode register 2
TIM2_CCMR3  equ 0x5307 ; TIM2 capture/compare mode register 3
TIM2_CCER1  equ 0x5308 ; TIM2 capture/compare enable register 1
TIM2_CCER2  equ 0x5309 ; TIM2 capture/compare enable register 2
TIM2_CNTRH  equ 0x530A ; TIM2 counter high
TIM2_CNTRL  equ 0x530B ; TIM2 counter low
TIM2_PSCR   equ 0x530C ; TIM2 prescaler register
TIM2_ARRH   equ 0x530D ; TIM2 auto-reload register high
TIM2_ARRL   equ 0x530E ; TIM2 auto-reload register low
TIM2_CCR1H  equ 0x530F ; TIM2 capture/compare register 1 high
TIM2_CCR1L  equ 0x5310 ; TIM2 capture/compare register 1 low
TIM2_CCR2H  equ 0x5311 ; TIM2 capture/compare register 2 high
TIM2_CCR2L  equ 0x5312 ; TIM2 capture/compare register 2 low
TIM2_CCR3H  equ 0x5313 ; TIM2 capture/compare register 3 high
TIM2_CCR3L  equ 0x5314 ; TIM2 capture/compare register 3 low
.endif
.endif

;
; TIM3
;
.ifdef STM8_HAS_TIM3
TIM3_CR1    equ 0x5320 ; TIM3 control register 1
TIM3_IER    equ 0x5321 ; TIM3 interrupt enable register
TIM3_SR1    equ 0x5322 ; TIM3 status register 1
TIM3_SR2    equ 0x5323 ; TIM3 status register 2
TIM3_EGR    equ 0x5324 ; TIM3 event generation register
TIM3_CCMR1  equ 0x5325 ; TIM3 capture/compare mode register 1
TIM3_CCMR2  equ 0x5326 ; TIM3 capture/compare mode register 2
TIM3_CCER1  equ 0x5327 ; TIM3 capture/compare enable register 1
TIM3_CNTRH  equ 0x5328 ; TIM3 counter high
TIM3_CNTRL  equ 0x5329 ; TIM3 counter low
TIM3_PSCR   equ 0x532A ; TIM3 prescaler register
TIM3_ARRH   equ 0x532B ; TIM3 auto-reload register high
TIM3_ARRL   equ 0x532C ; TIM3 auto-reload register low
TIM3_CCR1H  equ 0x532D ; TIM3 capture/compare register 1 high
TIM3_CCR1L  equ 0x532E ; TIM3 capture/compare register 1 low
TIM3_CCR2H  equ 0x532F ; TIM3 capture/compare register 2 high
TIM3_CCR2L  equ 0x5330 ; TIM3 capture/compare register 2 low
.endif

;
; TIM4
;
.ifdef STM8_HAS_TIM4
TIM4_CR1    equ 0x5340 ; TIM4 control register 1
.ifdef STM8_LOW_DENSITY
TIM4_IER    equ 0x5343 ; TIM4 interrupt enable register
TIM4_SR     equ 0x5344 ; TIM4 status register
TIM4_EGR    equ 0x5345 ; TIM4 event generation register
TIM4_CNTR   equ 0x5346 ; TIM4 counter
TIM4_PSCR   equ 0x5347 ; TIM4 prescaler register
TIM4_ARR    equ 0x5348 ; TIM4 auto-reload register
.else
TIM4_IER    equ 0x5341 ; TIM4 interrupt enable register
TIM4_SR     equ 0x5342 ; TIM4 status register
TIM4_EGR    equ 0x5343 ; TIM4 event generation register
TIM4_CNTR   equ 0x5344 ; TIM4 counter
TIM4_PSCR   equ 0x5345 ; TIM4 prescaler register
TIM4_ARR    equ 0x5346 ; TIM4 auto-reload register
.endif
.endif

;
; TIM5
;
.ifdef STM8_HAS_TIM5
TIM5_CR1    equ 0x5300 ; TIM5 control register 1
TIM5_CR2    equ 0x5301 ; TIM5 control register 2
TIM5_SMCR   equ 0x5302 ; TIM5 slave mode control register
TIM5_IER    equ 0x5303 ; TIM5 interrupt enable register
TIM5_SR1    equ 0x5304 ; TIM5 status register 1
TIM5_SR2    equ 0x5305 ; TIM5 status register 2
TIM5_EGR    equ 0x5306 ; TIM5 event generation register
TIM5_CCMR1  equ 0x5307 ; TIM5 capture/compare mode register 1
TIM5_CCMR2  equ 0x5308 ; TIM5 capture/compare mode register 2
TIM5_CCMR3  equ 0x5309 ; TIM5 capture/compare mode register 3
TIM5_CCER1  equ 0x530A ; TIM5 capture/compare enable register 1
TIM5_CCER2  equ 0x530B ; TIM5 capture/compare enable register 2
TIM5_CNTRH  equ 0x530C ; TIM5 counter high
TIM5_CNTRL  equ 0x530D ; TIM5 counter low
TIM5_PSCR   equ 0x530E ; TIM5 prescaler register
TIM5_ARRH   equ 0x530F ; TIM5 auto-reload register high
TIM5_ARRL   equ 0x5310 ; TIM5 auto-reload register low
TIM5_CCR1H  equ 0x5311 ; TIM5 capture/compare register 1 high
TIM5_CCR1L  equ 0x5312 ; TIM5 capture/compare register 1 low
TIM5_CCR2H  equ 0x5313 ; TIM5 capture/compare register 2 high
TIM5_CCR2L  equ 0x5314 ; TIM5 capture/compare register 2 low
TIM5_CCR3H  equ 0x5315 ; TIM5 capture/compare register 3 high
TIM5_CCR3L  equ 0x5316 ; TIM5 capture/compare register 3 low
.endif

;
; TIM6
;
.ifdef STM8_HAS_TIM6
TIM6_CR1    equ 0x5340 ; TIM6 control register 1
TIM6_CR2    equ 0x5341 ; TIM6 control register 2
TIM6_SMCR   equ 0x5342 ; TIM6 slave mode control register
TIM6_IER    equ 0x5343 ; TIM6 interrupt enable register
TIM6_SR     equ 0x5344 ; TIM6 status register
TIM6_EGR    equ 0x5345 ; TIM6 event generation register
TIM6_CNTR   equ 0x5346 ; TIM6 counter
TIM6_PSCR   equ 0x5347 ; TIM6 prescaler register
TIM6_ARR    equ 0x5348 ; TIM6 auto-reload register
.endif

;
; ADC1
;
.ifdef STM8_HAS_ADC1
ADC_DB0RH   equ 0x53E0 ; ADC channel 0 data buffer register high
ADC_DB0RL   equ 0x53E1 ; ADC channel 0 data buffer register low
ADC_DB1RH   equ 0x53E2 ; ADC channel 1 data buffer register high
ADC_DB1RL   equ 0x53E3 ; ADC channel 1 data buffer register low
ADC_DB2RH   equ 0x53E4 ; ADC channel 2 data buffer register high
ADC_DB2RL   equ 0x53E5 ; ADC channel 2 data buffer register low
ADC_DB3RH   equ 0x53E6 ; ADC channel 3 data buffer register high
ADC_DB3RL   equ 0x53E7 ; ADC channel 3 data buffer register low
ADC_DB4RH   equ 0x53E8 ; ADC channel 4 data buffer register high
ADC_DB4RL   equ 0x53E9 ; ADC channel 4 data buffer register low
ADC_DB5RH   equ 0x53EA ; ADC channel 5 data buffer register high
ADC_DB5RL   equ 0x53EB ; ADC channel 5 data buffer register low
ADC_DB6RH   equ 0x53EC ; ADC channel 6 data buffer register high
ADC_DB6RL   equ 0x53ED ; ADC channel 6 data buffer register low
ADC_DB7RH   equ 0x53EE ; ADC channel 7 data buffer register high
ADC_DB7RL   equ 0x53EF ; ADC channel 7 data buffer register low
ADC_DB8RH   equ 0x53F0 ; ADC channel 8 data buffer register high
ADC_DB8RL   equ 0x53F1 ; ADC channel 8 data buffer register low
ADC_DB9RH   equ 0x53F2 ; ADC channel 9 data buffer register high
ADC_DB9RL   equ 0x53F3 ; ADC channel 9 data buffer register low
ADC_CSR     equ 0x5400 ; ADC control/status register
ADC_CR1     equ 0x5401 ; ADC configuration register 1
ADC_CR2     equ 0x5402 ; ADC configuration register 2
ADC_CR3     equ 0x5403 ; ADC configuration register 3
ADC_DRH     equ 0x5404 ; ADC data register high
ADC_DRL     equ 0x5405 ; ADC data register low
ADC_TDRH    equ 0x5406 ; ADC Schmitt trigger disable register high
ADC_TDRL    equ 0x5407 ; ADC Schmitt trigger disable register low
ADC_HTRH    equ 0x5408 ; ADC high threshold register high
ADC_HTRL    equ 0x5409 ; ADC high threshold register low
ADC_LTRH    equ 0x540A ; ADC low threshold register high
ADC_LTRL    equ 0x540B ; ADC low threshold register low
ADC_AWSRH   equ 0x540C ; ADC analog watchdog status register high
ADC_AWSRL   equ 0x540D ; ADC analog watchdog status register low
ADC_AWCRH   equ 0x540E ; ADC analog watchdog control register high
ADC_AWCRL   equ 0x540F ; ADC analog watchdog control register low
.endif

;
; ADC2
;
.ifdef STM8_HAS_ADC2
ADC_CSR     equ 0x5400 ; ADC control/status register
ADC_CR1     equ 0x5401 ; ADC configuration register 1
ADC_CR2     equ 0x5402 ; ADC configuration register 2
ADC_CR3     equ 0x5403 ; ADC configuration register 3
ADC_DRH     equ 0x5404 ; ADC data register high
ADC_DRL     equ 0x5405 ; ADC data register low
ADC_TDRH    equ 0x5406 ; ADC Schmitt trigger disable register high
ADC_TDRL    equ 0x5407 ; ADC Schmitt trigger disable register low
.endif

;
; beCAN
;
.ifdef STM8_HAS_CAN
CAN_MCR     equ 0x5420 ; CAN master control register
CAN_MSR     equ 0x5421 ; CAN master status register
CAN_TSR     equ 0x5422 ; CAN transmit status register
CAN_TPR     equ 0x5423 ; CAN transmit priority register
CAN_RFR     equ 0x5424 ; CAN receive FIFO register
CAN_IER     equ 0x5425 ; CAN interrupt enable register
CAN_DGR     equ 0x5426 ; CAN diagnosis register
CAN_FPSR    equ 0x5427 ; CAN page selection register
CAN_P0      equ 0x5428 ; CAN paged register 0
CAN_P1      equ 0x5429 ; CAN paged register 1
CAN_P2      equ 0x542A ; CAN paged register 2
CAN_P3      equ 0x542B ; CAN paged register 3
CAN_P4      equ 0x542C ; CAN paged register 4
CAN_P5      equ 0x542D ; CAN paged register 5
CAN_P6      equ 0x542E ; CAN paged register 6
CAN_P7      equ 0x542F ; CAN paged register 7
CAN_P8      equ 0x5430 ; CAN paged register 8
CAN_P9      equ 0x5431 ; CAN paged register 9
CAN_PA      equ 0x5432 ; CAN paged register A
CAN_PB      equ 0x5433 ; CAN paged register B
CAN_PC      equ 0x5434 ; CAN paged register C
CAN_PD      equ 0x5435 ; CAN paged register D
CAN_PE      equ 0x5436 ; CAN paged register E
CAN_PF      equ 0x5437 ; CAN paged register F
.endif

;
; CPU
;
CFG_GCR     equ 0x7F60 ; Global configuration register

;
; ITC
;
ITC_SPR1    equ 0x7F70 ; Interrupt software priority register 1
ITC_SPR2    equ 0x7F71 ; Interrupt software priority register 2
ITC_SPR3    equ 0x7F72 ; Interrupt software priority register 3
ITC_SPR4    equ 0x7F73 ; Interrupt software priority register 4
ITC_SPR5    equ 0x7F74 ; Interrupt software priority register 5
ITC_SPR6    equ 0x7F75 ; Interrupt software priority register 6
ITC_SPR7    equ 0x7F76 ; Interrupt software priority register 7
ITC_SPR8    equ 0x7F77 ; Interrupt software priority register 8

;
; SWIM
;
SWIM_CSR    equ 0x7F80 ; SWIM control status register

;
; DM
;
DM_BK1RE    equ 0x7F90 ; DM breakpoint 1 register extended byte
DM_BK1RH    equ 0x7F91 ; DM breakpoint 1 register high byte
DM_BK1RL    equ 0x7F92 ; DM breakpoint 1 register low byte
DM_BK2RE    equ 0x7F93 ; DM breakpoint 2 register extended byte
DM_BK2RH    equ 0x7F94 ; DM breakpoint 2 register high byte
DM_BK2RL    equ 0x7F95 ; DM breakpoint 2 register low byte
DM_CR1      equ 0x7F96 ; DM debug module control register 1
DM_CR2      equ 0x7F97 ; DM debug module control register 2
DM_CSR1     equ 0x7F98 ; DM debug module control/status register 1
DM_CSR2     equ 0x7F99 ; DM debug module control/status register 2
DM_ENFCTR   equ 0x7F9A ; DM enable function register

