#include "main.h"
/**
 * _strncat - concatenates two strings only taking bytes
 * @dest: first string added to
 * @src: second string to be added
 * @n: number of bytes to use from src
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
		;
	for (; *src != '\0'; src++)
	{
		if (n == 0)
			break;
		*temp = *src;
		temp++;
		n--;
	}
	return (dest);
}
