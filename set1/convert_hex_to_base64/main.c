#include "main.h"

int main(void)
{
	printf("[ hex to base64 encoding ]\n\n");

	char hex[strlen(str)], res[strlen(str)];

	/* display string */
	printf("string:\n%s\n\n", str);

	/* display string in hex encoding */
	str_to_hex(str, hex);
	printf("hex:\n%s\n\n", hex);

	/* display string in base64 encoding */
	hex_to_base64(hex, res);
	printf("base64:\n%s\n\n", res);

	return EXIT_SUCCESS;
}
