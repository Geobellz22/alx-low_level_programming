#include<stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
