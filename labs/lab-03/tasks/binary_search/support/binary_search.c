// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "binary_search.h"

int binary_search(int *v, int len, int dest)
{
	int start = 0;
	int end = len - 1;
	int mid = -1;

LOOP:
	if (start > end) return -1;
	mid = (start + end) / 2;
	if (v[mid] == dest) goto END;
	if (v[mid] > dest) goto BIG;
	start = mid + 1;
	goto LOOP;
BIG:
	end = mid - 1;
	goto LOOP;
END:
	return mid;
}
