#include "main.h"

/**
 * _islower - function look for lower case char
 * @c: is the char to be checked
 * Return: 0 or 1.
 */
int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
