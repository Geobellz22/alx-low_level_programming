#include<ctype.h>
/**
 * _isupper - print uppercase letter.
 * @c: character to be  checked.
 * Return: 1 if c is uppercase, 0 if c is lowercase.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
