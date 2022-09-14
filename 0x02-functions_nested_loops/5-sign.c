#include "main.h"

/**
 * print_sign - function to check for the sign of a number
 *  @n: it is an int that we'll use for the argument for the function
 *  Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
