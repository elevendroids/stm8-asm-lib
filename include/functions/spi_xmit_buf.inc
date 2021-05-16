; vim: ft=asm
.stm8
.list

;
; Performs a full-duplex SPI transmission, sending and receiving up to 256 bytes
;
; A - data length
; X - TX buffer
; Y - RX buffer
;
.func spi_xmit_buf
    push    A                               ; Store data length on stack
    ld      A, (X)                          ; Load first byte
    ld      SPI_DR, A                       ; Send first byte

tx:
    dec     (1, SP)                         ; Decrement the number of bytes to send
    jreq    rx_last                         ; If no more bytes left, receive the last response
    btjf    SPI_SR, #1, $                   ; Wait for the tx buffer to be empty
    incw    X                               ; Increment the tx address
    ld      A, (X)                          ; Load the next byte
    ld      SPI_DR, A                       ; Send the next byte

rx:
    btjf    SPI_SR, #0, $                   ; Wait for a received byte
    ld      A, SPI_DR                       ; Load it
    ld      (Y), A                          ; Store it in the rx buffer
    incw    Y                               ; Increment the rx address
    jp      tx                              ; Process next byte

rx_last:    
    btjf    SPI_SR, #0, $                   ; Wait for the last byte to be received
    ld      A, SPI_DR                       ; Load it
    ld      (Y), A                          ; Store it in the rx buffer

    btjt    SPI_SR, #7, $                   ; Wait until SPI is idle
    pop     A                               ; Stack cleanup
    ret
.endf
