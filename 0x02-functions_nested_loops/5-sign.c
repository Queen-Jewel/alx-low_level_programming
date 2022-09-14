#include "main.h"

/**
 * print_sign -> checks if int is 0, positive or negative
 *  @n: it is an int that we'll use for the argument for the function
 *  Return: 0
 */

int print_sign(int n)
{
	int n;

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
		putchar('0');
		return (0);
	}
}
