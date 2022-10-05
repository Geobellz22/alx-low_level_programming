#include "main.h"
/**
 * str_concat - functions to concatenates two strings
 * @s1: first string for concatenation
 * @s2: second string for concatenation
 * Return: A pointer in the memory location of a concatenated string
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	str = malloc(sizeof(char) * (i + j + !));
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		*(str + i) = *(s1 + i);
	for (j = 0; s2[j]; j++)
	{
		*(str + i) = *(s2 + j);
		i++
	}
	*(str + i) != '\0';
	return (str);
}
