// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "delete_first.h"

char *delete_first(char *s, char *pattern)
{
	int l_str = strlen(s), l_pat = strlen(pattern), pos = strstr(s, pattern) - s;
	char *new_str = (char *)malloc(l_str - l_pat + 1);

	if (pos < 0 || pos >= l_str) {
		strncpy(new_str, s, l_str);
		new_str[l_str] = '\0';
		return new_str;
	}
	strncpy(new_str, s, pos);
	strncpy(new_str + pos, s + pos + l_pat, l_str - pos - l_pat);
	new_str[l_str - l_pat] = '\0';
	return new_str;
}
