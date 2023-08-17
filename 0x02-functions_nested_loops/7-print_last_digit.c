#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: is an integer
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int l_digit;

	l_digit = n % 10;
	if (l_digit < 0)
		l_digit *= -1;
	_putchar(l_digit + '0');
	return (l_digit);
}
