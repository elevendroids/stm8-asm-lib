; vim: ft=asm
.stm8
.list

;
; Converts a byte into its hex representation
;
; Params:
; A - byte to convert

; Returns:
; XH - first hex digit (high nibble)
; XL - second hex digit (low nibble)
;
.func byte_to_hex
    push    A                               ; Save the original value on stack
    clrw    Y                               ; Clear the index register

    swap    A                               ; Swap nibbles
    and     A, #0x0F                        ; Mask-out the high nibble
    ld      YL, A                           ; Load the nibble into lower Y
    ld      A, (hex_lut, Y)                 ; Load the matching hex digit from the LUT: A <= hex_lut[Y]
    ld      XH, A                           ; Store the hex digit in the higher X

    pop     A                               ; Reload the original byte
    and     A, #0x0F                        ; Mask-out the high nibble
    ld      YL, A                           ; Load the nibble into lower Y
    ld      A, (hex_lut, Y)                 ; Load the matching hex digit
    ld      XL, A                           ; Store the hex digit in the lower X
    ret
; hex digit lookup table
hex_lut:    .ascii  "0123456789ABCDEF"
.endf
