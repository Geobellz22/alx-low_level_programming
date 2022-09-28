#include "main.h"
/**
 * _memcpy - memcpy function
 * @dest: start point to change
 * @src: value that will change
 * @n: number of bytes to change
 * Return: change pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, n--, src++)
		*dest1 = *src1;
	return (dest);
}
