#include<stdlib.h>
#include<stdio.h>
/**
 * main - program that mulitiplies two integers
 * @argc: Number of arguments passed to main
 * @argv: Array of arguments passed to main
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}

