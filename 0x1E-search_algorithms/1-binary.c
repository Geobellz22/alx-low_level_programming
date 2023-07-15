#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return the function as -1 for failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t i;
	size_t middle;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= end)
	{
		middle = (start + end) / 2;

		if (array[middle] == value)
		{
			return (middle);
		}

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < size - 1)
				printf(", ");
		}
		printf("\n");

		if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}

	return (-1);
}
