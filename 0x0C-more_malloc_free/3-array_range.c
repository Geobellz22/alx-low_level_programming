#include<stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array. if failed returned NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ar == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
