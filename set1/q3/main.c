#include "main.h"

int main(void)
{
	printf("[ single-byte XOR cipher ]\n\n");

	const int len = strlen(enc) / 2;
	char hex[len], dec[len];

	/* display encrypted string */
	printf("encrypted:\n%s\n\n", enc);

	/* hex encoded string to array of hex bytes conversion */
	str_to_hex(enc, hex);
	printf("hex string:\n%s\n\n", hex);

	/* decryption */
	unsigned char c;
	for (c=0; c<128; ++c) {
		sbyte_xor(hex, c, dec);
		printf("%s\n", dec);
	}

	return EXIT_FAILURE;
}
