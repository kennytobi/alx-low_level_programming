#include "main.h"
/**
 * get_endianness - check the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	return ((int)*c);
}
