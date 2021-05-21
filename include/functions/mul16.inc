; vim: ft=asm
.ifndef _FUNCTIONS_MUL16_INC
.define _FUNCTIONS_MUL16_INC

.stm8
.list

;
; Multiplies two unsigned 16-bit integers from X and Y
; and returns the 32-bit result in X:Y
;
; Algorithm:
; This function uses the standard way of multiplying 16-bit numbers
; using an 8-bit multiply instruction:
;
; R = M * N = (M.H * N.H) << 16 + ((M.H * N.L) + (M.L * N.H)) << 8 + (M.L * N.L)
;
; Params:
; X - first argument
; Y - second argument
;
; Returns:
; X:Y - 32-bit result
;
mul16:
    sub     SP, #4                          ; Reserve space for the 32-bit result on stack
    pushw   X                               ; Save M
    pushw   Y                               ; Save N

    ld      A, (2, SP)                      ; Load N.L to A
    mul     X, A                            ; M.L * N.L
    ldw     (7, SP), X                      ; Save to R[15:0]

    ld      A, (1, SP)                      ; Load N.H to A
    ldw     X, (2, SP)                      ; Load N.L:M.H to X
    mul     X, A                            ; M.H * N.H
    ldw     (5, SP) ,X                      ; Save to R[31:16]

    ldw     X, (3, SP)                      ; Load M.H:M.L to X
    mul     X, A                            ; M.L * N.H
    ld      A, (5, SP)                      ; Load R[31:24] to A
    addw    X, (6, SP)                      ; Add R[23:8] to X
    adc     A, #0                           ; Add carry to A
    ld      (5, SP), A                      ; Save A to R[31:24]
    ldw     (6, SP) ,X                      ; Save X to R[23:8]

    ldw     X, (2, SP)                      ; Load N.L:M.H to X
    ld      A, XH                           ; Load N.L to A
    mul     X, A                            ; M.H * N.L
    ld      A, (5, SP)                      ; Load R[31:24] to A
    addw    X, (6, SP)                      ; Add R[23:8] to X
    adc     A, #0                           ; Add carry to A
    ld      (5, SP), A                      ; Save A to R[31:24]
    ldw     (6, SP) ,X                      ; Save X to R[23:8]

    ldw     X, (5, SP)                      ; Load R[31:16] to X
    ldw     Y, (7, SP)                      ; Load R[15:0] to Y

    addw    SP, #(4 * 2)                    ; Stack cleanup
    ret

.endif ; _FUNCTIONS_MUL16_INC
