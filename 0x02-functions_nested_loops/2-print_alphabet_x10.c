#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char ch;
	int j = 0;


	while (j++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
