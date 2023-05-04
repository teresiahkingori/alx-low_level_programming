#include "main.h"
/**
 *Converts a binary number to an unsigned int.
 *@b: Binary.
 * Return: Unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int ui = 0;
int len, base_two = 1;
if (!b)
return (0);
for (len = 0; b[len]; len++)
;
for (len--; len >= 0; len--, base_two *= 2)
{
if (b[len] != '0' && b[len] != '1')
return (0);
if (b[len] & 1)
ui += base_two;
}
return (ui);
}
