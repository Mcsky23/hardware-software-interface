// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "len_xor.h"

int my_strlen(const char *str)
{
	char *ptr = (char *)str;
	while (*str++);
	return (int)(str - ptr - 1);
}

void equality_check(const char *str)
{
	int len = my_strlen(str);
	for (int i = 0; i < len; i++) {
		if (!(*(str + i) ^ *(str + (i + (1 << i)) % len))) {
			printf("Address of %c: %p\n", *(str + i), (str + i));
		}
	}
}
