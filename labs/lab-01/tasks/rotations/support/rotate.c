// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

void rotate_left_asm(unsigned int *number, int bits)
{
	__asm__(".intel_syntax noprefix\n"
		"mov rax, [rdi]\n"
		"mov rcx, rsi\n"
		"rol rax, cl\n"
		"mov [rdi], rax\n"
		".att_syntax prefix\n"
	);
}

void rotate_right_asm(unsigned int *number, int bits)
{
	__asm__(".intel_syntax noprefix\n"
		"mov rax, [rdi]\n"
		"mov rcx, rsi\n"
		"ror rax, cl\n"
		"mov [rdi], rax\n"
		".att_syntax prefix\n"
	);
}

void rotate_left(unsigned int *number, int bits)
{
	*number = (*number << bits) | (*number >> (32 - bits));
}

void rotate_right(unsigned int *number, int bits)
{
    *number = (*number >> bits) | (*number << (32 - bits));
}
