#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: size of the triangle.
 *
 * Return: 0
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
