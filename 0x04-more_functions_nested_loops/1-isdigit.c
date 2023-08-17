#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: is an integer
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
