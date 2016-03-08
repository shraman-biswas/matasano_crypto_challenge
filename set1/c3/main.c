#include "main.h"

int main(void)
{
	printf("[ single-byte XOR cipher ]\n\n");

	const int len = strlen(enc) / 2;
	char key=0, bytes[len], dec[len];

	/* display encrypted string */
	printf("encrypted hex encoded string:\n%s\n\n", enc);

	/* hex encoded string to array of hex bytes conversion */
	str_to_bytes(enc, bytes);
	printf("encrypted bytes:\n%s\n\n", bytes);

	/* decryption */
	decrypt_sbyte_xor(bytes, dec, &key);
	printf("encryption key: %c\ndecrypted string:\n%s\n\n", key, dec);

	return EXIT_SUCCESS;
}
