#include "fixed_xor.h"

void fixed_xor(const char *s1, const char *s2, char *s3)
{
	while (*s3++ = *s1++ ^ *s2++);
	*s3 = 0;
}

