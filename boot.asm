bits 32

section .multiboot
	dd 0x1BADB002
	dd 0x0
	dd - (0x1BADB002 + 0x0)

section .text
extern main
global start
start:
	cli
	mov esp, stack_pointer
	call main
	hlt

section .bss
resb 8192
stack_pointer:

