#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char tab[] = "_putchar";
	long unsigned int i;

	for (i = 0; i < sizeof(tab); i++)
	{
		putchar(tab[i]);
	}
	putchar('\n');
	return (0);
}
