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
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	} else
	{
		return (NULL);													}
	strnew[i] = '\0';
	return (strnew);
}
