#include "main.h"
/**
 * factorial - factorial of a given numbber
 * @n:int
 * Return:int
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
