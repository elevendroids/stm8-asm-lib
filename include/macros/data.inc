; vim: ft=asm
.stm8
;
; Simple static memory "allocation" macros
;
; Example:
;
; DATA_START(0x1000)
; DATA(r0, 1)
; DATA(r1, 1)
; DATA(tx_buffer, 64)
; DATA(rx_buffer, 64)
;
; The above will define the following symbols:
; r0 = 0x1000
; r1 = 0x1001
; tx_buffer = 0x1002
; rx_buffer = 0x1042
;
; which later can be used as standard labels:
; mov r0, #0x55
; mov r1, #0xaa
;
; You can create two separate data sections (ie. for RAM and EEPROM)
; by using DATA_START() twice:
;
; DATA_START(0x0000)
; DATA(foo, 1)
; DATA(bar, 4)
;
; DATA_START(0x4000)
; DATA(nv_foo, 4)

;
; Initializes a data section
;
.macro DATA_START(start_addr)
.set _data_top = start_addr
.endm

;
; Allocates a data variable within the current section
;
.macro DATA(name, size)
.set name = _data_top
.set _data_top = _data_top + size
.endm

;
; Allocates a data byte variable within the current section
;
.macro DATA_B(name)
DATA(name, 1)
.endm

;
; Allocates a data word variable within the current section
;
.macro DATA_W(name)
DATA(name, 2)
.endm
