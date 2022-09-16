#include<ctype.h>
/**
 * _isdigit- print digit..
 *@c: character to be  checked.
 * Return: 1 if c is uppercase, 0 if c is lowercase.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
		else
			return (0);
}
