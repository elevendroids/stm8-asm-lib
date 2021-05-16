; vim: ft=asm
.stm8
.list

;
; Sends and receives a single byte via SPI
;
; Params:
; A - byte to send
;
; Returns:
; A - received byte
;
.func spi_xmit
    ld      SPI_DR, A                       ; Send it
    btjf    SPI_SR, #0, $                   ; Wait for the received byte
    ld      A, SPI_DR                       ; Load it
    btjt    SPI_SR, #7, $                   ; Wait for the SPI to be idle
    ret
.endf
