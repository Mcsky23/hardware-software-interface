// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mirror.h"

int main(void)
{
	char s[100];
	strcpy(s, "Hello, World!");
	mirror(s);
	printf("%s\n", s);
	return 0;
}
