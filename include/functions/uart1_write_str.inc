; vim: ft=asm
.stm8
.list

;
; Writes a null-terminated string on UART1
;
; Params:
; X - string address
;
.func uart1_write_str
next:
    ld      A, (X)                          ; read the character at X
    jreq    end                             ; check for null terminator, end when we're done
    btjf    UART1_SR, #7, $                 ; wait until TX buffer is empty
    ld      UART1_DR, A                     ; print out the character
    incw    X                               ; increment the character address
    jp      next                            ; process next character
end:
    btjf    UART1_SR, #6, $                 ; wait for the transmission to complete
    ret
.endf
