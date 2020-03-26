org 100h
	;; 3+4=?
	jmp start
	napis DB "? + ? = ?",13,10,"$"
	skladnik1 equ 5
	skladnik2 equ 3
	cyfranaascii equ 48
start:
	mov bx, offset napis
	
	mov al, skladnik1
	
	add al, 48
	mov [bx], al
	add bx, 4

	mov al, skladnik2
	
	add al, 48
	mov [bx], al
	add bx,4
	
	add al, skladnik1
	mov [bx],al
	
	mov dx, offset napis
	mov ah, 9
	int 21h
ret



