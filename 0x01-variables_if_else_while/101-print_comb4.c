#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point of program
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	

	for (a = 48; a < 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == 55 && b == 56 && c == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
