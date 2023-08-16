#include "main.h"

/**
 * _isalpha - checks for alphabetic charcter
 * @c: is a char
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
			return (1);
	}
	for (i = 97; i < 123; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
