#ifndef DECRYPT_XOR_H
#define DECRYPT_XOR_H

#include <ctype.h>
#include <float.h>
#include <stdbool.h>
#include <string.h>

#include "xor.h"

/* normalized letter frequency histogram look-up table */
static const double lhist_lut[26] = {
	.08167,	.01492,	.02782,	.04253,	.12702,	/* a - e */
	.02228,	.02015,	.06094,	.06966,	.00153,	/* f - j */
	.00772,	.04025,	.02406,	.06749,	.07507,	/* k - o */
	.01929,	.00095,	.05987,	.06327,	.09056,	/* p - t */
	.02758,	.00978,	.02361,	.00150,	.01974,	/* u - y */
	.00074,					/* z     */
};

char decrypt_sbyte_xor(const char *const b1, char *const b2);
bool calc_lhist(const char *b, double *const h);
double cmp_lhist(const double *const h);

#endif
