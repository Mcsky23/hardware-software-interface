// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>

#include "odd_even.h"

void print_binary(int number, int nr_bits)
{
	printf("0b");
	for (int i = nr_bits - 1; i >= 0; i--) {
		printf("%d", (number >> i) & 1);
	}
	printf("\n");
}

void check_parity(int *numbers, int n)
{
	for (int i = 0; i < n; i++) {
		if (*(numbers + i) & 1) {
			printf("0x%08X\n", *(numbers + i));
		} else {
			print_binary(*(numbers + i), 8);
		}
	}
}
