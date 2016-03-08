#include "decrypt_xor.h"

/* decrypt single-byte XOR cipher */
char decrypt_sbyte_xor(
	const int len,
	const char *const b1,
	char *const b2)
{
	char key=0, tmp[len];
	int c;
	double err, min=DBL_MAX, lhist[26];
	for (c=0; c<128; ++c) {
		sbyte_xor(b1, c, tmp);
		if (!calc_letter_hist(len, tmp, lhist))
			continue;
		err = cmp_letter_hist(lhist);
		if (err <= min) {
			key = c;
			min = err;
		}
	}
	sbyte_xor(b1, key, b2);
	return key;
}

/* calculate normalized letter frequency histogram of bytes */
bool calc_letter_hist(
	const int len,
	const char *const b,
	double *const h)
{
	int i;
	for (i=0; i<26; ++i)
		h[i] = 0;
	for (i=0; i<len; ++i) {
		if ((b[i] < 32) || (b[i] > 127))
			return false;
		if (isalpha(b[i]))
			h[tolower(b[i]) - 'a']++;
	}
	for (i=0; i<26; ++i)
		h[i] /= len;
	return true;
}

/* compare letter frequency histograms */
/* Chi-square histogram comparison     */
/* d(h1,h2) = sum( (h1[i] - h2[i])^2 / h1[i] ) */
double cmp_letter_hist(const double *const h)
{
	int i;
	double tmp, err=0;
	for (i=0; i<26; ++i) {
		tmp = letter_lut[i] - h[i];
		err += tmp * tmp / letter_lut[i];
	}
	return err;
}
