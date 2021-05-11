.stm8
.list

;
; Waits a given number of milliseconds.
;
; Parameters:
; X - 16-bit number of milliseconds, must be > 0
;
; Clobbers:
; X, Y
;
.func delay_ms
loop_ms:
    ldw     Y, #((F_CPU / 1000) / 3)    ; set the inner loop to the equivalent of 1000us
loop_cycles:
    decw    Y                           ; decrement the inner loop
    jrne    loop_cycles                 ; loop until Y is zero
    decw    X                           ; decrement the number of milliseconds
    jrne    loop_ms                     ; loop until X is zero
    ret 
.endf
