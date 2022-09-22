#include "main.h"
/**
*_strcat - concatenates 2 strings
* @dest:first string to be added to
* @src:second string to be added
* Return:concatenated string
*/
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
