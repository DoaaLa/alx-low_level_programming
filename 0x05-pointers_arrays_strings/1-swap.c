#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer
 * @b: pointer to intger
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
