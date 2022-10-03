#include<stdlib.h>
#include<main.h>
/**
 * main - prints a number of arguments passed into it
 * @argc - number of arguments passed to the program
 * @argv - lists ofrguments passed to the program
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
