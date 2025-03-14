// SPDX-License-Identifier: BSD-3-Clause

#include <stddef.h>

#include "pointers.h"

int my_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2) {
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

void *my_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest + n;
	const char *s = src + n;
	while (n--) {
		*--d = *--s;
	}
	return dest;
}

char *my_strcpy(char *dest, const char *src)
{
	char *d = dest;
	while ((*d++ = *src++));
	return dest;
}
