_proc_id0:
	push rbp
	mov rbp , rsp
	add rsp , 0
	mov eax , [rbp + 16]
	add eax , [rbp - 8]
	mov [rbp - 12] , eax
	mov rax , [rbp + 16]
	pop rbp
	ret
_start:
	push rbp
	mov rbp , rsp
	add rsp , 0
	mov rax , 2
	mov id0 , rax
_inputint:
	mov rax, 0
	push rax
_inputintloop:
	mov rcx, digits
	mov rax, 0
	mov rdi, 0
	mov rsi, rcx
	mov rdx, 1
	syscall

	mov rcx, digits
	mov rbx, [rcx]
	mov rdx, 47
	cmp rbx, rdx
	jle _inputintloopend
	mov rdx, 58
	cmp rbx, rdx
	jge _inputintloopend
	
	pop rax
	mov rbx, 10
	mul rbx
	mov rbx, [rcx]
	add rbx, -48
	add rax, rbx
	push rax
	jmp _inputintloop

_inputintloopend:
	pop rax
	ret

_inputints:
	mov rax, 0
	push rax

	mov rcx, digits
	mov rax, 0
	mov rdi, 0
	mov rsi, rcx
	mov rdx, 1
	syscall

	mov rcx, digits
	mov rbx, [rcx]
	mov rdx, 45
	cmp rbx, rdx
	je _marker
	mov rdx, 47
	cmp rbx, rdx
	jle _inputintloopends
	mov rdx, 58
	cmp rbx, rdx
	jge _inputintloopends
	pop rax
	mov rbx, 10
	mul rbx
	mov rbx, [rcx]
	add rbx, -48
	add rax, rbx
	mov rdi, 1
	push rdi
	push rax
	jmp _inputintloops
_marker:
	mov rdi, -1
	pop rax
	push rdi
	push rax
_inputintloops:
	mov rcx, digits
	mov rax, 0
	mov rdi, 0
	mov rsi, rcx
	mov rdx, 1
	syscall

	mov rcx, digits
	mov rbx, [rcx]
	mov rdx, 47
	cmp rbx, rdx
	jle _inputintloopends
	mov rdx, 58
	cmp rbx, rdx
	jge _inputintloopends
	
	pop rax
	mov rbx, 10
	mul rbx
	mov rbx, [rcx]
	add rbx, -48
	add rax, rbx
	push rax
	jmp _inputintloops

_inputintloopends:
	pop rax
	pop rdi
	mul rdi
	ret



_printint:
	mov rcx, digits
	mov rbx, 10
	mov [rcx], bl
	inc rcx

_printintloop:
	mov rdx, 0
	mov rbx, 10
	div rbx
	add rdx, 48
	mov [rcx], dl
	inc rcx
	cmp rax, 0
	jne _printintloop

_printintloop2:
	mov rax, 1
	mov rdi, 1
	mov rsi, rcx
	mov rdx, 1
	push rcx
	syscall

	pop rcx
	dec rcx
	cmp rcx, digits
	jge _printintloop2

	ret

_printints:
	mov rbx, rax
	cmp rbx, 0
	mov rbx, 1
	jge _printints2
	mov rbx, -1
	mul rbx
	
_printints2: 
	push rbx
	mov rcx, digits
	mov rbx, 10
	mov [rcx], bl
	inc rcx

_printintloops:
	mov rdx, 0
	mov rbx, 10
	div rbx
	add rdx, 48
	mov [rcx], dl
	inc rcx
	cmp rax, 0
	jne _printintloops

	pop rbx
	cmp rbx, -1
	jne _printintloop2s
	mov rbx, 45
	mov [rcx], bl
_printintloop2s:
	mov rax, 1
	mov rdi, 1
	mov rsi, rcx
	mov rdx, 1
	push rcx
	syscall

	pop rcx
	dec rcx
	cmp rcx, digits
	jge _printintloop2s

	ret