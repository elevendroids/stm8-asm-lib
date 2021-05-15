; vim: ft=asm
.stm8

;
; Waits a given number of cycles
; Params:
; - cycles - number of cycles to wait
;
.macro DELAY_CYCLES(cycles)
.scope
    ldw     X, #(cycles / 3)    ; 2 cycles
    jreq    end
loop:
    decw    X           ; 1
    jrne    loop        ; 1 / 2
end:
.ends
.endm

;
; Waits a given number of microseconds
; Params:
; - us - number of microseconds to wait
;
.macro DELAY_US(us)
.scope
    ldw     X, #(((us * (F_CPU / 1000)) / 1000) / 3)
    jreq    end
loop:
    decw    X
    jrne    loop
end:
.ends
.endm

;
; Waits a given number of milliseconds
; Params:
; - ms - number of milliseconds to wait
;
.macro DELAY_MS(ms)
.scope
    ldw     Y, #ms
loop_ms:
    ldw     X, #((F_CPU / 1000) / 3)
loop_cycles:
    decw    X
    jrne    loop_cycles
    decw    Y
    jrne    loop_ms
.ends
.endm

