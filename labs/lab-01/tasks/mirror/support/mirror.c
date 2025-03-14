// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mirror.h"

void mirror(char *s)
{
	int len = strlen(s);
	char *ptr = s + len - 1;
	while (s < ptr)
	{
		*s ^= *ptr ^= *s ^= *ptr;
		s++;
		ptr--;
	}
}
