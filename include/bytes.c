#include "bytes.h"

/* convert hex encoded string to bytes */
void str_to_bytes(const char *s, char *b)
{
	for (; *s; s+=2 )
		*b++ = (A2D(*s) << 4) | A2D(*(s+1));
	*b = 0;
}

/* convert bytes to hex encoded string */
void bytes_to_str(const char *b, char *s)
{
	while (*b) {
		*s++ = D2A(*b >> 4);
		*s++ = D2A(*b & 0xf);
		b++;
	}
	*s = 0;
}
