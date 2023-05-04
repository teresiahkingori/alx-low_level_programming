#include "main.h"

unsigned int binary_to_uint(const char *binary_string)
{

if (binary_string == NULL)

return 0;



int length = 0;

while (binary_string[length] != '\0')

length++;



unsigned int result = 0, base = 1;

for (int i = length - 1; i >= 0; i--)

{

if (binary_string[i] != '0' && binary_string[i] != '1')

return 0;



result += (binary_string[i] - '0') * base;

base <<= 1;  // Use bitwise left shift instead of multiplication by 2

}



return result;

}
