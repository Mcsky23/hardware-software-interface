// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "vector_max.h"

int vector_max(int *v, int len)
{
	int max = 0;
	unsigned int i;

	i = 0;
LOOP:
	if (v[i] <= max) goto LOWER;
	max = v[i];
LOWER:
	i++;
	if (i < len) goto LOOP;
	return max;
}
