#include "main.h"

/**
 * _pow_recursion - returns the pow of number
 * @x: integer
 * @y: integer
 * Return: the pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
