#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i;
	int size;

	for (i = 0; s[i] != '\0'; i++)
		size = i;
	for (i = size; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');

}
