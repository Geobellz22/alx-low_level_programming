#include "main.h"
/**
 * puts_half - prints half s string
 * @str: strong
 */
void puts_half(char *str)
{
	int j, half;

	j = 0;

	while (str[j] != '\0')
		j++;
	half = (j) / 2;
	if (j % 2 != 0)
		half = ((j - 1) / 2) + 1;
	for (; half < j; half++)
		_putchar(str[half]);
	_putchar('\n');
}
