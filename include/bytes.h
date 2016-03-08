#ifndef BYTES_H
#define BYTES_H

#include <ctype.h>

/* ascii to decimal conversion macro */
#define A2D(x) (((x) <= '9') ? (x) - '0' : tolower(x) - 'a' + 10)

/* decimal to ascii conversion macro */
#define D2A(x) (((x) <= 9) ? (x) + '0' : (x) + 'a' - 10)

void str_to_bytes(const char *s, char *b);
void bytes_to_str(const char *b, char *s);

#endif
