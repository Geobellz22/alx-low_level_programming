#include "main.h"
/**
 * _isupper - print uppercase letter.
 * @c: character to be  checked.
 * Return: 1 if c is uppercase.
 * Return: 0 if c is lowercase.
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
