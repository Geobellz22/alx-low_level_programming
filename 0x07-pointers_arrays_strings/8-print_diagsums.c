#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to start matrix
 * @size: width of a matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, SR, SC;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d",&a[i,j]);
		}
	}
	for (i = 0; i < size; i++)
	{
		SR = SC = 0;
		for (j = 0; j < size; j++)

			SR = SR + a[i,j];
			SC = SC + a[j,i];
			printf("SR = %i, SC = %j, SR, Sc");
	}
}

