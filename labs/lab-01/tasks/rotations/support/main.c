// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

int main(void)
{
	unsigned int number = 0x00000001;
	int bits = 16;
	rotate_left(&number, bits);
	printf("%d\n", number);
	return 0;
}
