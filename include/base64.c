#include "base64.h"

/* convert bytes to base64 representation */
void base64(const char *b1, char *b2)
{
	while (*b1) {
		*b2++ = base64_lut[ *b1 >> 2 ];
		*b2++ = base64_lut[ ((*b1 << 4) & 0x3f) | (*(b1+1) >> 4) ];
		++b1;
		*b2++ = base64_lut[ ((*b1 << 2) & 0x3f) | (*(b1+1) >> 6) ];
		++b1;
		*b2++ = base64_lut[ *b1++ & 0x3f ];
	}
	*b2 = 0;
}
