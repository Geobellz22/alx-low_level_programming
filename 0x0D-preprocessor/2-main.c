#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the name of
 * a file it was compiled from,
 * Return: nothing to be returned
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}