; vim: ft=asm
.stm8
.list

;
; Receives a buffer via SPI 
;
; Params:
; A - data length
; X - RX buffer
;
.func spi_recv_buf
    push    A                               ; Save data length on stack
    mov     SPI_DR, #0                      ; Send a dummy byte to start the first SPI transfer
tx:
    dec     (1, SP)                         ; Decrement the remaining data length
    jreq    rx_last                         ; Check if this was the last one
    btjf    SPI_SR, #1, $                   ; Wait for the tx register to be empty
    mov     SPI_DR, #0                      ; Send a next dummy byte

rx:
    btjf    SPI_SR, #0, $                   ; Wait for a received byte
    ld      A, SPI_DR                       ; Load it
    ld      (X), A                          ; Store it in the rx buffer
    incw    X                               ; Increment the rx address
    jp      tx                              ; Process next byte

rx_last:
    btjf    SPI_SR, #0, $                   ; Wait for the last byte
    ld      A, SPI_DR                       ; Load it
    ld      (X), A                          ; Store it in the rx buffer
    btjt    SPI_SR, #7, $                   ; Wait for SPI to be idle
    pop     A                               ; Stack cleanup
    ret
.endf
