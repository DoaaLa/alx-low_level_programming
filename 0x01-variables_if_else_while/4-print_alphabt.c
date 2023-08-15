#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 102; i++)
	{
		putchar(i);
	}
	for (i = 102; i < 113; i++)
	{
		putchar(i);
	}
	for (i = 114; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
