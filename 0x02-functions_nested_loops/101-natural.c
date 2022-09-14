#include<stdio.h>
/**
 * main - Lists all the natural numbers belows below 1024(excluded)
 * that are multiples of 3 0r 5.
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; 1 < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0
}
			sum += i;
	}

	printf("%d\n" , sum);
	return (0);
}
