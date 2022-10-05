#include "main.h"
/**
 * create_array - creates an array of chars, 
 * initializing with specific chars
 * @size: array size
 * @c: character used to initialize arrays
 * Return: NULL if size = 0
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int = i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ar + i) = c;
	return (ar);
}

