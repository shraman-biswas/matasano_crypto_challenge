#include "hex_to_base64.h"

/* convert hex encoded string to array of hex bytes */
void str_to_hex(const char *s, char *h)
{
	for (; *s; s+=2 )
		*h++ = (A2D(*s) << 4) | A2D(*(s+1));
	*h = 0;
}

/* convert array of hex bytes to hex encoded string */
void hex_to_str(const char *h, char *s)
{
	while (*h) {
		*s++ = D2A(*h >> 4);
		*s++ = D2A(*h & 0xf);
		h++;
	}
	*s = 0;
}

/* convert array of hex bytes to base64 representation */
void hex_to_base64(const char *h1, char *h2)
{
	while (*h1) {
		*h2++ = base64_lut[ *h1 >> 2 ];
		*h2++ = base64_lut[ ((*h1++ << 4) & 0x3f) | (*h1 >> 4) ];
		*h2++ = base64_lut[ ((*h1++ << 2) & 0x3f) | (*h1 >> 6) ];
		*h2++ = base64_lut[ *h1++ & 0x3f ];
	}
	*h2 = 0;
}
