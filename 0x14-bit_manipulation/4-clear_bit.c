#include "main.h"
/**
 * where index is the index, starting from 0 of the bit you want to set
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);
*n = (~(2UL << index) & *n);
return (1);
}
