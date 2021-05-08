.stm8
.list

;
; Waits a given number of milliseconds.
;
; Parameters:
; - (stack) 16-bit number of milliseconds, must be > 0
;
; Returns:
; - nothing
;
.func delay_ms
    ldw     Y, (0x03, SP)               ; load the requested number of milliseconds
loop_ms:
    ldw     X, #((F_CPU / 1000) / 3)    ; set the inner loop to the equivalent of 1000us
loop_cycles:
    decw    X                           ; decrement the inner loop
    jrne    loop_cycles                 ; loop until X is zero
    decw    Y                           ; decrement the number of milliseconds
    jrne    loop_ms                     ; loop until Y is zero
    ret 
.endf
