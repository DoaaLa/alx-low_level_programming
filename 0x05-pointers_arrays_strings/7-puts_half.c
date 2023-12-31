#include "main.h"

/**
 * puts_half - prints characters of a string
 * @str: a string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i;
	int len, n;

	len = 0;
	for (len = 0; str[len] != '\0'; len++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

