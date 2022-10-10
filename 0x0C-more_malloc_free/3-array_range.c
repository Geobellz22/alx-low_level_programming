#include<stdio.h>
#include<stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array. if failed returned NULL
 */
int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * max);
	if (ar = NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		*(ar + i) = i;
	return (ar);
}
