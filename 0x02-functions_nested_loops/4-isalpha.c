#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: character has to be checked
 * Return: 1 if letter, is a lowercase, uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
