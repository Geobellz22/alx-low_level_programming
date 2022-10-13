#include<stdarg.h>
#include<stdio.h>
/**
 *  print_numbers - prints numbers
 *  @separator: character to separate numbers
 *  @n: n for number input
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list x;

	va_start(x, n);
	for (i = 0; i
