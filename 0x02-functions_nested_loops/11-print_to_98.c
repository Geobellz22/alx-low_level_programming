#include "main.h"
/**
 * print_to_98 - prints all natural from input to 98.
 * in order to be separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if  (n >= 98)
	{
	while (n > 98)
		printf("%d, ", n--);
	printf("%d\n", n);
	}
	
	else (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

