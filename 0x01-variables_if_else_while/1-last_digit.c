#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - print if the number is positive, zero or negative
 *
 * Description: using the function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int n;
int L;
char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;


if (L > 5)
{
	printf("%s %d is %d and is greater than 5\n", str, n, L);
}
else if (L < 6 && L != 0)
{
	printf("%s %d is %d and is less than 6 ad not 0\n", str, n, L);
}
if (L == 0)
{
	printf("L of %d is %d and is 0\n", n, L);
}
return (0);
}
