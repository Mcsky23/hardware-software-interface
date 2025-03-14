// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#include "pixel.h"
#include "pixels.h"

#define GET_PIXEL(pic, x, y) ( *(*((pic) + (x)) + (y)) )
#define ulong unsigned long

void reverse_pic(struct picture *pic)
{
	for (int i = 0; i < pic->height / 2; i++) {
		void **ptr1 = pic->pix_array + i;
		void **ptr2 = pic->pix_array + (pic->height - i - 1);
		*(ulong *) ptr1 ^= *(ulong *) ptr2 ^= *(ulong *) ptr1 ^= *(ulong *) ptr2;
	}
}

void color_to_gray(struct picture *pic)
{
	for (int i = 0; i < pic->height; i++) {
		for (int j = 0; j < pic->width; j++) {
			struct pixel pix = GET_PIXEL(pic->pix_array, i, j);
			pix.R = 0.3 * pix.R;
			pix.G = 0.59 * pix.G;
			pix.B = 0.11 * pix.B;
			pic->pix_array[i][j] = pix;
		}
	}
}
