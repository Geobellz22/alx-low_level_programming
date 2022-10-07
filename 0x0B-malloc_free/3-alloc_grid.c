#include "main.h"
/**
 * alloc_grid - Function returns a pointer to a 2 dimensional array of integers
 * @width: column of the array
 * @height: row of the array
 * Return: A pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);


	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int *) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	return (array);
}
