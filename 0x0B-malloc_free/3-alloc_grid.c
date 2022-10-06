#include "main.h"
/**
 * alloc_grid - Function returns a pointer to a 2 dimensional array of integers
 * @width: column of the array
 * @height: row of the array
 * Return: A pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || length <= 0)
		return (NULL);


	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] malloc(sizeof(int *) * width);
		if (ar[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ar[i]);
			free(ar[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < height; j++)
			*(*ar + i) + j) = 0;
	return (ar);
}
