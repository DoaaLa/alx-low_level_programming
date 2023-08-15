#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char tab[] = "_putchar";
	[[un]signed] int i;

	for (i = 0; i < sizeof(tab); i++)
	{
		putchar(tab[i]);
	}
	putchar('\n');
	return (0);
}
