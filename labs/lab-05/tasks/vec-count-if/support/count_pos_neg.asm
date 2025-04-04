; SPDX-License-Identifier: BSD-3-Clause

%include "printf32.asm"

%define ARRAY_SIZE    10

section .data
    dword_array dd 1392, -12544, -7992, -6992, 7202, 27187, 28789, -17897, 12988, 17992

section .text
extern printf
global main
main:
	; TODO: Implement the code to count negative and positive numbers in the array
    mov ecx, ARRAY_SIZE
    xor edi, edi ; even
    xor esi, esi ; odd
loop_label:
    mov edx, ecx
    sal edx, 2
    mov ebx, dword [dword_array + edx - 4]
    and ebx, 1
    test ebx, ebx
    jnz odd
    inc edi
    jmp end_loop
odd:
    inc esi
end_loop:
    loop loop_label

    PRINTF32 `Odd: %d\nEven: %d\n`, esi, edi
    
    ret
