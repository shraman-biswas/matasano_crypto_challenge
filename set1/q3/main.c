#include "main.h"

/* function prototypes */
static void decrypt_sbyte_xor(const char *h1, char *h2);

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
	decrypt_sbyte_xor(hex, dec);

	return EXIT_FAILURE;
}

static void decrypt_sbyte_xor(const char *h1, char *h2)
{
	int c;
	char tmp[strlen(h1)];
	for (c=0; c<128; ++c) {
		sbyte_xor(h1, c, tmp);
		printf("%s\n", tmp);
	}
}
