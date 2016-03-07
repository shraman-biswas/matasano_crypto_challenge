#include "hex_to_base64.h"

/* convert hex encoded string to array of hex bytes */
void str_to_hex(const char *const s1, char *s2)
{
	const char *p=s1;
	for (;*p; p+=2)
		*s2++ = (H2D(*p) << 4) | H2D(*(p+1));
	*s2 = 0;
}

/* convert array of hex bytes to base64 representation */
void hex_to_base64(const char *const s1, char *s2)
{
	const char *p=s1;
	while (*p != 0) {
		*s2++ = base64_lut[ *p >> 2 ];
		*s2++ = base64_lut[ ((*p++ << 4) & 0x3f) | (*p >> 4) ];
		*s2++ = base64_lut[ ((*p++ << 2) & 0x3f) | (*p >> 6) ];
		*s2++ = base64_lut[ *p++ & 0x3f ];
	}
	*s2 = 0;
}
