#include "main.h"
/**
 * print_triangle - function prints a triangle, followed by a new line.
 * @size: size is the size of the triang
 *If size is 0 or less, the function should print a new linw
 *Use the character # to print the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j > 1; j++)
				_putchar(' ');
			for (k = i + j; k >= 1; k--)
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
