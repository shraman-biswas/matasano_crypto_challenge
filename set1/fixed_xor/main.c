#include "main.h"

/* function prototypes */
static void disp_hex(const char *const hex, const int len);

int main(void)
{
	printf("[ fixed xor ]\n\n");

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

	/* display array of hex bytes */
	printf("hex 1:\n");
	disp_hex(hex1, len);
	printf("hex 2:\n");
	disp_hex(hex2, len);
	printf("\n");

	/* applying fixed xor */
	fixed_xor(hex1, hex2, res);

	/* display result */
	printf("result:\n");
	disp_hex(res, len);
	printf("\n");

	/* display result */
	printf("result:\n%s\n\n", res);
	hex_to_str(res, str);
	printf("hex string:\n%s\n\n", str);

	return EXIT_FAILURE;
}

static void disp_hex(const char *const hex, const int len)
{
	int i;
	for (i=0; i<len-1; ++i)
		printf("%02x, ", hex[i]);
	printf("%02x\n", hex[i]);
}
