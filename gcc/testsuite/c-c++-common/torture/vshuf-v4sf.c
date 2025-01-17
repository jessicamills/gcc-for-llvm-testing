/* { dg-require-effective-target builtin_shuffle } */
/* { dg-require-effective-target noclone } */

#if __SIZEOF_FLOAT__ == 4
typedef float V __attribute__((vector_size(16)));
# if __SIZEOF_INT__ == 4
typedef unsigned int VI __attribute__((vector_size(16)));
# elif __SIZEOF_LONG__ == 4
typedef unsigned long VI __attribute__((vector_size(16)));
# else
#  define UNSUPPORTED
# endif
#else
# define UNSUPPORTED
#endif

#define A	0.69314718055994530942f
#define B	2.7182818284590452354f
#define C	2.30258509299404568402f
#define D	1.4426950408889634074f

#define W	0.31830988618379067154f
#define X	3.14159265358979323846f
#define Y	1.41421356237309504880f
#define Z	0.70710678118654752440f

#include "vshuf-4.inc"
#include "vshuf-main.inc"
