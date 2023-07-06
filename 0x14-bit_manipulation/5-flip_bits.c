#include "main.h"
/**
 * flip_bits -this returns the no. of bits
 * needed to flip to get from one no. to another
 * @n: a first no.
 * @m: a second no.
 * Return:the no. of bits.
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits;
for (nbits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
nbits++;
}
return (nbits);
}
