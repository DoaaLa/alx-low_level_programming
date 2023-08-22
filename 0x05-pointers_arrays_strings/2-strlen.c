#include "main.h"

/**
 * _strlen - determine the length of a string
 * @s: a pointer to string
 * Return: the length of the parameter
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

