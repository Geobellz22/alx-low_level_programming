#include "3-calc.h"
/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of elements
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argc[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argc[1]);
	arg2 = atoi(argc[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n")
			exit(99);
	}
	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);

	printf("%d\n", result);
	return (0);
}
