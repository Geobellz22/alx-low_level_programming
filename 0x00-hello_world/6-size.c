#include<stdio.h>

/**
 * main - Prints the sizeof many var types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %d byte(s)\n",Sizeof(c));
	Printf("Size of an int: %d byte(s)\n", Sizeof(i));
	printf("Size of a long int: %d byte(s)\n", Sizeof(l));
	printf("Size of a long long int: %d byte(s)\n', Sizeof(ll));
	printf("Size of a float: %d byte(s)\n", Sizeof(f));
	return (0);
}
