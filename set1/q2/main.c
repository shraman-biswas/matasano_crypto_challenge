#include "main.h"

int main(void)
{
	printf("[ fixed XOR ]\n\n");

	const int len = strlen(str1) / 2;
	char hex1[len], hex2[len], res[len], str[2 * len];

	/* check if input strings are of equal lengths */
	if ((strlen(str2) / 2) != len) {
		fprintf(stderr, "unequal input string lengths!\n");
		exit(EXIT_FAILURE);
	}

	/* display strings */
	printf("hex string 1:\n%s\nhex string 2:\n%s\n\n", str1, str2);

	/* convert hex encoded strings to array of hex bytes */
	str_to_hex(str1, hex1);
	str_to_hex(str2, hex2);

	/* applying fixed xor */
	fixed_xor(hex1, hex2, res);

	/* display result */
	printf("result:\n%s\n\n", res);
	hex_to_str(res, str);
	printf("hex string:\n%s\n\n", str);

	return EXIT_FAILURE;
}
