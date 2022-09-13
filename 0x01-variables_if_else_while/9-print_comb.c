#include<stdio.h>
/**
 * main - printing numbers from 0-9 with commas and spaces between them
 *
 * description: using the main function
 * this program prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)

	{

	putchar(d);

		if (d != '9')
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
