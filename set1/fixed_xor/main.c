#include "main.h"

/* function prototypes */
static void disp_hex(const char *const hex, const int len);

int main(void)
{
	printf("[ fixed xor ]\n");

	char hex1[strlen(str1) / 2], hex2[strlen(str2) / 2];
	int len1=0, len2=0;

	/* check if input strings are of equal lengths */
	len1 = strlen(str1);
	len2 = strlen(str2);
	if (len1 != len2) {
		fprintf(stderr, "unequal input string lengths!\n");
		exit(EXIT_FAILURE);
	}

	/* display strings */
	printf("string 1: %s\nstring 2: %s\n", str1, str2);

	/* convert hex encoded strings to array of hex bytes */
	str_to_hex(str1, hex1);
	str_to_hex(str2, hex2);

	/* display array of hex bytes */
	printf("hex 1: ");
	disp_hex(hex1, len1 / 2);
	printf("hex 2: ");
	disp_hex(hex2, len2 / 2);

	return EXIT_FAILURE;
}

static void disp_hex(const char *const hex, const int len)
{
	int i;
	for (i=0; i<len-1; ++i)
		printf("%02x, ", hex[i]);
	printf("%02x\n", hex[i]);
}
