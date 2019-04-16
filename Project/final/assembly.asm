section .bss
	digits resb 100
section .text
	global _start
_start:
	push rbp
	mov rbp , rsp
	sub rsp , 1468
	call _inputints
	mov [rbp - 12] , eax
	mov eax, [rbp - 12]
	mov [rbp - 4] , eax
	call _inputints
	mov [rbp - 16] , eax
	mov eax, [rbp - 16]
	mov [rbp - 8] , eax
	mov eax , [rbp - 4]
	mov ebx , [rbp - 8]
	mul ebx
	mov [rbp - 24] , eax
	mov eax, [rbp - 24]
	mov [rbp - 20] , eax
	mov eax , 0
	mov [rbp - 428] , eax
_label109:
	mov eax , [rbp - 428]
	mov ebx , [rbp - 20]
	cmp eax , ebx
	mov rcx, 0
	mov [rbp - 432] , ecx
	sets [rbp - 432]
	mov eax , [rbp - 432]
	cmp eax , $0
	je _label121
	jmp _label115
_label112:
	mov eax , [rbp - 428]
	add eax , 1
	mov [rbp - 436] , eax
	mov eax, [rbp - 436]
	mov [rbp - 428] , eax
	jmp _label109
_label115:
	call _inputints
	mov [rbp - 444] , eax
	mov eax, [rbp - 444]
	mov [rbp - 440] , eax
	mov rcx, rbp
	add rcx, 424
	mov rax, 0
	mov eax, [rbp - 428]
	mov rbx, 4
	mul rbx
	add rcx, rax
	mov [rbp - 452] , rcx
	mov eax, [rbp - 440]
	mov rcx, [rbp - 452]
	mov [rcx], eax
	jmp _label112
_label121:
	call _inputints
	mov [rbp - 436] , eax
	mov eax, [rbp - 436]
	mov [rbp - 428] , eax
	call _inputints
	mov [rbp - 440] , eax
	mov eax, [rbp - 440]
	mov [rbp - 432] , eax
	mov eax , [rbp - 428]
	mov ebx , [rbp - 432]
	mul ebx
	mov [rbp - 448] , eax
	mov eax, [rbp - 448]
	mov [rbp - 444] , eax
	mov eax , 0
	mov [rbp - 852] , eax
_label130:
	mov eax , [rbp - 852]
	mov ebx , [rbp - 444]
	cmp eax , ebx
	mov rcx, 0
	mov [rbp - 856] , ecx
	sets [rbp - 856]
	mov eax , [rbp - 856]
	cmp eax , $0
	je _label142
	jmp _label136
_label133:
	mov eax , [rbp - 852]
	add eax , 1
	mov [rbp - 860] , eax
	mov eax, [rbp - 860]
	mov [rbp - 852] , eax
	jmp _label130
_label136:
	call _inputints
	mov [rbp - 868] , eax
	mov eax, [rbp - 868]
	mov [rbp - 864] , eax
	mov rcx, rbp
	add rcx, 848
	mov rax, 0
	mov eax, [rbp - 852]
	mov rbx, 4
	mul rbx
	add rcx, rax
	mov [rbp - 876] , rcx
	mov eax, [rbp - 864]
	mov rcx, [rbp - 876]
	mov [rcx], eax
	jmp _label133
_label142:
	mov eax , [rbp - 8]
	mov ebx , [rbp - 428]
	cmp eax , ebx
	mov rcx, 0
	mov [rbp - 852] , ecx
	setnz [rbp - 852]
	mov eax , [rbp - 852]
	cmp eax , $0
	je _label151
	mov eax , 1
	mov [rbp - 860] , eax
	mov eax , [rbp - 860]
	mov ebx , -1
	mul ebx
	mov [rbp - 864] , eax
	mov eax, [rbp - 864]
	mov [rbp - 860] , eax
	mov eax, [rbp - 860]
	mov [rbp - 856] , eax
	mov ebx, [rbp - 856]
	sub rsp, 4
	mov [rsp], ebx
	mov rax, 0
	mov eax, [rsp]
	add rsp, 4
	call _printints
	jmp _label194
_label151:
	mov eax , 0
	mov [rbp - 1256] , eax
_label152:
	mov eax , [rbp - 1256]
	mov ebx , [rbp - 4]
	cmp eax , ebx
	mov rcx, 0
	mov [rbp - 1260] , ecx
	sets [rbp - 1260]
	mov eax , [rbp - 1260]
	cmp eax , $0
	je _label194
	jmp _label158
_label155:
	mov eax , [rbp - 1256]
	add eax , 1
	mov [rbp - 1264] , eax
	mov eax, [rbp - 1264]
	mov [rbp - 1256] , eax
	jmp _label152
_label158:
	mov eax , 0
	mov [rbp - 1268] , eax
_label159:
	mov eax , [rbp - 1268]
	mov ebx , [rbp - 432]
	cmp eax , ebx
	mov rcx, 0
	mov [rbp - 1272] , ecx
	sets [rbp - 1272]
	mov eax , [rbp - 1272]
	cmp eax , $0
	je _label155
	jmp _label165
_label162:
	mov eax , [rbp - 1268]
	add eax , 1
	mov [rbp - 1276] , eax
	mov eax, [rbp - 1276]
	mov [rbp - 1268] , eax
	jmp _label159
_label165:
	mov eax , 0
	mov [rbp - 1280] , eax
	mov eax , 0
	mov [rbp - 1284] , eax
_label167:
	mov eax , [rbp - 1284]
	mov ebx , [rbp - 8]
	cmp eax , ebx
	mov rcx, 0
	mov [rbp - 1288] , ecx
	sets [rbp - 1288]
	mov eax , [rbp - 1288]
	cmp eax , $0
	je _label187
	jmp _label173
_label170:
	mov eax , [rbp - 1284]
	add eax , 1
	mov [rbp - 1292] , eax
	mov eax, [rbp - 1292]
	mov [rbp - 1284] , eax
	jmp _label167
_label173:
	mov eax , [rbp - 8]
	mov ebx , [rbp - 1256]
	mul ebx
	mov [rbp - 1312] , eax
	mov eax , [rbp - 1312]
	add eax , [rbp - 1284]
	mov [rbp - 1316] , eax
	mov eax, [rbp - 1316]
	mov [rbp - 1304] , eax
	mov eax , [rbp - 432]
	mov ebx , [rbp - 1284]
	mul ebx
	mov [rbp - 1320] , eax
	mov eax , [rbp - 1320]
	add eax , [rbp - 1268]
	mov [rbp - 1324] , eax
	mov eax, [rbp - 1324]
	mov [rbp - 1308] , eax
	mov rcx, rbp
	add rcx, 424
	mov rax, 0
	mov eax, [rbp - 1304]
	mov rbx, 4
	mul rbx
	add rcx, rax
	mov [rbp - 1332] , rcx
	mov rcx, [rbp - 1332]
	mov eax, [rcx]
	mov [rbp - 1296] , eax
	mov rcx, rbp
	add rcx, 848
	mov rax, 0
	mov eax, [rbp - 1308]
	mov rbx, 4
	mul rbx
	add rcx, rax
	mov [rbp - 1340] , rcx
	mov rcx, [rbp - 1340]
	mov eax, [rcx]
	mov [rbp - 1300] , eax
	mov eax , [rbp - 1296]
	mov ebx , [rbp - 1300]
	mul ebx
	mov [rbp - 1344] , eax
	mov eax , [rbp - 1280]
	add eax , [rbp - 1344]
	mov [rbp - 1348] , eax
	mov eax, [rbp - 1348]
	mov [rbp - 1280] , eax
	jmp _label170
_label187:
	mov eax , [rbp - 4]
	mov ebx , [rbp - 1256]
	mul ebx
	mov [rbp - 1288] , eax
	mov eax , [rbp - 1288]
	add eax , [rbp - 1268]
	mov [rbp - 1292] , eax
	mov eax, [rbp - 1292]
	mov [rbp - 1284] , eax
	mov rcx, rbp
	add rcx, 1252
	mov rax, 0
	mov eax, [rbp - 1284]
	mov rbx, 4
	mul rbx
	add rcx, rax
	mov [rbp - 1300] , rcx
	mov eax, [rbp - 1280]
	mov rcx, [rbp - 1300]
	mov [rcx], eax
	jmp _label162
	jmp _label155
_label194:
	mov eax , [rbp - 4]
	mov ebx , [rbp - 432]
	mul ebx
	mov [rbp - 856] , eax
	mov eax, [rbp - 856]
	mov [rbp - 852] , eax
	mov eax , 0
	mov [rbp - 860] , eax
_label197:
	mov eax , [rbp - 860]
	mov ebx , [rbp - 852]
	cmp eax , ebx
	mov rcx, 0
	mov [rbp - 864] , ecx
	sets [rbp - 864]
	mov eax , [rbp - 864]
	cmp eax , $0
	je _label208
	jmp _label203
_label200:
	mov eax , [rbp - 860]
	add eax , 1
	mov [rbp - 868] , eax
	mov eax, [rbp - 868]
	mov [rbp - 860] , eax
	jmp _label197
_label203:
	mov rcx, rbp
	add rcx, 1252
	mov rax, 0
	mov eax, [rbp - 860]
	mov rbx, 4
	mul rbx
	add rcx, rax
	mov [rbp - 880] , rcx
	mov rcx, [rbp - 880]
	mov eax, [rcx]
	mov [rbp - 872] , eax
	mov ebx, [rbp - 872]
	sub rsp, 4
	mov [rsp], ebx
	mov rax, 0
	mov eax, [rsp]
	add rsp, 4
	call _printints
	jmp _label200
_label208:
	mov rax, 60
	mov rdi, 0
	syscall
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
	mov ebx, eax
	mov rax, 0
	mov eax, ebx
	cmp ebx, 0
	mov rbx, 1
	jge _printints2
	mov rbx, -1
	mul ebx
		
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