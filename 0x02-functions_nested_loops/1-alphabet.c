#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int j;

	for (j = 97 ; j <= 122 ; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	
	return (0);
}
