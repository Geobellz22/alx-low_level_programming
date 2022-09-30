#include "main.h"
/**
 * help  - helps prime function
 * @n: number to be checked
 * @x: checks if n is divisible by x
 * Return: o if not prime, 1 if prime
 */
int help(int n, int x)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (help(n, ++x));
		return (check(a + 1, b));
}
/**
 * is_prime_number - states if number is prime
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
		if (n == 3)
		return (1);
		return (check(n, 2));
}
