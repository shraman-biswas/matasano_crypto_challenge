#include "hex_to_base64.h"

/* convert hex encoded string to array of hex bytes */
void str_to_hex(const char *s1, char *s2)
{
	for (; *s1; s1+=2)
		*s2++ = (A2D(*s1) << 4) | A2D(*(s1+1));
	*s2 = 0;
}

/* convert array of hex bytes to base64 representation */
void hex_to_base64(const char *s1, char *s2)
{
	while (*s1) {
		*s2++ = base64_lut[ *s1 >> 2 ];
		*s2++ = base64_lut[ ((*s1++ << 4) & 0x3f) | (*s1 >> 4) ];
		*s2++ = base64_lut[ ((*s1++ << 2) & 0x3f) | (*s1 >> 6) ];
		*s2++ = base64_lut[ *s1++ & 0x3f ];
	}
	*s2 = 0;
}

void hex_to_str(const char *s1, char *s2)
{
	while (*s1) {
		*s2++ = D2A(*s1 >> 4);
		*s2++ = D2A(*s1 & 0xf);
		s1++;
	}
	*s2 = 0;
}
