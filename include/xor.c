#include "xor.h"

void fixed_xor(const char *h1, const char *h2, char *h3)
{
	while (*h3++ = *h1++ ^ *h2++);
	*h3 = 0;
}

