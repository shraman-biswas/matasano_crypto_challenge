#include "fixed_xor.h"

void fixed_xor(
	const char *const hex1,
	const char *const hex2,
	char *const res,
	const int len)

{
	int i=0;
	for (i=0; i<len; ++i)
		res[i] = hex1[i] ^ hex2[i];
}

