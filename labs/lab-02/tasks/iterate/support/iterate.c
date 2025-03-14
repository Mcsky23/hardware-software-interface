// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "iterate.h"
#include "array.h"

void print_chars(void)
{
	for (int i = 0; i < 5 * 4; i++) {
		unsigned char *curr = (unsigned char *) &v + i;
		printf("%p -> 0x%x\n", curr, *curr);
	}

	printf("-------------------------------\n");
}

void print_shorts(void)
{
	for (int i = 0; i < 5 * 2; i++) {
		unsigned short *curr = (unsigned short *) &v + i;
		printf("%p -> 0x%x\n", curr, *curr);
	}

	printf("-------------------------------\n");
}

void print_ints(void)
{
	for (int i = 0; i < 5; i++) {
		unsigned int *curr = (unsigned int *) &v + i;
		printf("%p -> 0x%x\n", curr, *curr);
	}

	printf("-------------------------------\n");
}
