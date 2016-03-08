#include "main.h"

int main(void)
{
	printf("[ fixed XOR ]\n\n");

	const int len = strlen(str1) / 2;
	char bytes1[len], bytes2[len], res[len], str[2 * len];

	/* check if input strings are of equal lengths */
	if ((strlen(str2) / 2) != len) {
		fprintf(stderr, "unequal input string lengths!\n");
		exit(EXIT_FAILURE);
	}

	/* display strings */
	printf("hex encoded string 1:\n%s\n", str1);
	printf("hex encoded string 2:\n%s\n\n", str2);

	/* convert hex encoded strings to bytes */
	str_to_bytes(str1, bytes1);
	str_to_bytes(str2, bytes2);

	/* apply fixed xor */
	fixed_xor(bytes1, bytes2, res);
	printf("fixed xor result:\n%s\n\n", res);

	/* bytes to string conversion */
	bytes_to_str(res, str);
	printf("hex encoded string:\n%s\n\n", str);

	return EXIT_SUCCESS;
}
