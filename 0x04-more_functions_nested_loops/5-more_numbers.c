#include "main.h"
/**
 *  more_numbers - prints numbers to 14
 *
 *  Return: 0
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (a > 9)
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
			_putchar('\n');
	}
}
