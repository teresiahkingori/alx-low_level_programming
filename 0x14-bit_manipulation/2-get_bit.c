#include "main.h"
/**
 * it will return the value of a bit- in a decimal number at an index
 *the number to search
 * indexed bit
 *Returns:the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
