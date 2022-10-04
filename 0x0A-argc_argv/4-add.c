#include<stdlib.h>
#include<stdio.h>
/**
 * main - program that adds positive numbers
 * @argc: Number of argumments passed to the program
 * @argv: Array of arguments passed to the program
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			}
			printf("%d\n", sum);
		}
		return (0);
}

