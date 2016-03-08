#include "xor.h"

/* XOR two equal-length array of hex bytes */
void fixed_xor(const char *h1, const char *h2, char *h3)
{
	while (*h1 && *h2)
		*h3++ = *h1++ ^ *h2++;
	*h3 = 0;
}

/* XOR array of hex bytes with single byte */
void sbyte_xor(const char *h1, const char c, char *h2)
{
	while (*h1 && c)
		*h2++ = *h1++ ^ c;
	*h2 = 0;
}
