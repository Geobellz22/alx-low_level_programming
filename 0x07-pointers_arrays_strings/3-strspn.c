#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: pointer where we search for
 * @c: character where we search for
 * Return: NULL if character is not found, return pointer
 */
char *_strchr(char *s, char c)
{
	char *s1 = s - 1;

	do {
		s1++;
		if  (*s1 == c)
			return (s1);
	} while (*s1 != '\0');

	return (0);
}
