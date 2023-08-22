#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: a pointer to a string
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(*(str + '\0'));
}
