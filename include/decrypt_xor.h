#ifndef DECRYPT_XOR_H
#define DECRYPT_XOR_H

#include <ctype.h>
#include <float.h>
#include <stdbool.h>

#include "xor.h"

/* normalized letter frequency histogram look-up table */
static const double letter_lut[26] = {
	.08167,	.01492,	.02782,	.04253,	.12702,	/* a - e */
	.02228,	.02015,	.06094,	.06966,	.00153,	/* f - j */
	.00772,	.04025,	.02406,	.06749,	.07507,	/* k - o */
	.01929,	.00095,	.05987,	.06327,	.09056,	/* p - t */
	.02758,	.00978,	.02361,	.00150,	.01974,	/* u - y */
	.00074,					/* z     */
};

char decrypt_sbyte_xor(
	const int len,
	const char *const h1,
	char *const h2);
bool calc_letter_hist(
	const int len,
	const char *const b,
	double *const h);
double cmp_letter_hist(const double *const h);

#endif