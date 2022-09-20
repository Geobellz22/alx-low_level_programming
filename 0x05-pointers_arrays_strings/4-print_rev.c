#include "main.h"
/**
 * print_rev - prints string
 * @s: input string
 * Return: no return
 */
void print_rev(char *s)
{
	int c, i;

	c = 0;

	while (s[c] != 0)
		c++;
	c--;

	for (i = c; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
