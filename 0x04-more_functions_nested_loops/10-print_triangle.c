#include "main.h"
/**
 * print_trianle - prints a triangle.
 * @size: size of the triangle.
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	for (1 = 0; i < size; i++)
	{
		for (j = 1; j < (size - 1); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
