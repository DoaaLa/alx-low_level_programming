#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: The name of the person
 * @f: function pointer
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
