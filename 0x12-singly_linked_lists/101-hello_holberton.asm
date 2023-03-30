section .data
message db 'Hello, Hoberton',0Ah ; Message to print

section .text
global main
extern printf

main:
push message ; Push message address onto stack
mov rdi, message ; set first argument to message address
xor eax, eax ; clear eax register
call printf ; call printf function
add rsp, 8 ; Remove message address from stack
ret ; Return from main
