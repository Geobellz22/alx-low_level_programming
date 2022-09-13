#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - print if the numbers from 0-9
 *
 * this program prints: "0,1,2,3,4,5,6,7,8,9"
 * return: 0;
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
{
	putchar(d);
}
	putchar('\n');
return (0);
}
