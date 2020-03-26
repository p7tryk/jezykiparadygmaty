org 100h

	jmp start
	napis DB "?",13,10,"$"
start:
	mov bx, offset napis
	mov dx, offset napis
	mov cl, 48
    
	add cl, 1
	mov [bx], cl
	mov ah, 9
	int 21h
	
	add cl, 1
	mov [bx], cl
	mov ah, 9
	int 21h
	
	add cl, 1
	mov [bx], cl
	mov ah, 9
	int 21h
	
ret



