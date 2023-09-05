#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new allocated spacd in memory.
 * @str: pointer to a new string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *new;
	int i, n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
		;
	new = (char *)malloc(n * sizeof(char));
	if (new != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			new[i] = str[i];
	} else
	{
		return (NULL);
	}
	new[i] = '\0';
	return (new);
}
