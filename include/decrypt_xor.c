#include "decrypt_xor.h"

/* decrypt single-byte XOR cipher */
double decrypt_sbyte_xor(const char *const b1, char *const b2, char *const key)
{
	char tmp[strlen(b1)];
	int c;
	double err, min=DBL_MAX, lhist[26];
	for (c=0; c<128; ++c) {
		sbyte_xor(b1, c, tmp);		/* XOR bytes with key */
		if (!calc_lhist(tmp, lhist))	/* skip if non-printable */
			continue;
		err = cmp_lhist(lhist);		/* calculate comparison error */
		if (err <= min) {		/* store key & smallest error */
			*key = c;
			min = err;
		}
	}
	sbyte_xor(b1, *key, b2);
	return min;
}

/* compare letter frequency histograms         */
/* Chi-square histogram comparison             */
/* d(h1,h2) = sum( (h1[i] - h2[i])^2 / h1[i] ) */
double cmp_lhist(const double *const h)
{
	int i;
	double tmp, err=0;
	for (i=0; i<26; ++i) {
		tmp = lhist_lut[i] - h[i];
		err += tmp * tmp / lhist_lut[i];
	}
	return err;
}

/* calculate normalized letter frequency histogram of bytes */
bool calc_lhist(const char *b, double *const h)
{
	int i, len = strlen(b);
	for (i=0; i<26; ++i)			/* clear histogram */
		h[i] = 0;
	while (*b) {
		if (!isprint(*b))		/* check if non-printable */
			return false;
		if (isalpha(*b))		/* check if alphabet */
			++h[tolower(*b) - 'a'];
		++b;
	}
	for (i=0; i<26; ++i)			/* normalize histogram */
		h[i] /= len;
	return true;
}
