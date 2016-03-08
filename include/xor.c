#include "xor.h"

/* XOR two equal-length bytes arrays */
void fixed_xor(const char *b1, const char *b2, char *b3)
{
	while (*b1 || *b2)
		*b3++ = *b1++ ^ *b2++;
	*b3 = 0;
}

/* XOR bytes array with single byte */
void sbyte_xor(const char *b1, const char c, char *b2)
{
	while (*b1 || c)
		*b2++ = *b1++ ^ c;
	*b2 = 0;
}
