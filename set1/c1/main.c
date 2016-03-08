#include "main.h"

int main(void)
{
	printf("[ hex to base64 encoding ]\n\n");

	const int len = strlen(str) / 2;
	char bytes[len], res[4 / 3 * len];

	/* display hex encoded string */
	printf("hex encoded string:\n%s\n\n", str);

	/* hex encoded string to bytes encoding */
	str_to_bytes(str, bytes);
	printf("bytes:\n%s\n\n", bytes);

	/* bytes to base64 encoding */
	base64(bytes, res);
	printf("base64 encoded:\n%s\n\n", res);

	return EXIT_SUCCESS;
}
