#include "main.h"
/**
 * get_endianness - this checks endianness
 * Return: a null if endian is big,
 * 1 if endian is less..
 **/
int get_endianness(void)
{
unsigned int x;
char *c;
x = 1;
c = (char *) &x;
return ((int)*c);
}
