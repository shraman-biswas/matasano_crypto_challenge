#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hex_to_base64.h"
#include "xor.h"

/* letter frequency table */
const double letter_freq[] = {
	8.167,	1.492,	2.782,	4.253,	12.702,	/* a - e */
	2.228,	2.015,	6.094,	6.966,	0.153,	/* f - j */
	0.772,	4.025,	2.406,	6.749,	7.507,	/* k - o */
	1.929,	0.095,	5.987,	6.327,	9.056,	/* p - t */
	2.758,	0.978,	2.361,	0.150,	1.974,	/* u - y */
	0.074,					/* z     */
};

/* encrypted hex encoded string */
const char enc[] = "1b37373331363f78151b7f2b783431333d78397828372d363c78373e783a393b3736";

#endif
