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
int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	
if (l > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, 1);
}
else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, 1);
}
else if (l < 6 =! 0)
{
	printf("Last digit of %d is %d and is less than 6 and not o\n", n, l);
}
return (0);
}