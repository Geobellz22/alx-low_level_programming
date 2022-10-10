#include<stdio.h>
#include<stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of bytes of element in array
 * Return: pointer to array, if failed return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i, len;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = nmemb * size;
	ar = malloc(len);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ar[i] = 0;
	return (ar);
}
