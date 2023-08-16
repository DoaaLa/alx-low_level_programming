#include "main.h"

/**
 * main - FFunction prints text
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char tab[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(tab[i]);
	}
	_putchar('\n');
	return (0);
}
