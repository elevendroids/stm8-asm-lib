; vim: ft=asm
.stm8
.list

;
; Sends a buffer via SPI
;
; A - data length
; X - TX buffer 
;
.func spi_send_buf
    push    A                               ; Save the data length on stack

next:
    ld      A, (X)                          ; Load the next byte from the tx buffer
    ld      SPI_DR, A                       ; Send it
    btjf    SPI_SR, #1, $                   ; Wait for the tx register to be empty
    incw    X                               ; Increment the tx address
    dec     (1, SP)                         ; Decrement the remaining data length
    jrne    next                            ; Send the next byte if any

    btjt    SPI_SR, #7, $                   ; Wait for the SPI to be idle
    ld      A, SPI_DR                       ; Clear receive overrun (we've ignored rx data)
    ld      A, SPI_SR                       ; 
    pop     A                               ; Stack cleanup
    ret
.endf
