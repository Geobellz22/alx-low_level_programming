#include<stdlib.h>
#include<stdio.h>
/**
 * main - prints a number of arguments passed into it
 * @argc: Number of arguments passed to the program
 * @argv: Lists of arguments passed to the program
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
