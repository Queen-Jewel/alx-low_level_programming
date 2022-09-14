#include "main.h"

/**
 * main - print the  lowercase alphabelts
 *
 * print_alphabelt -> print the lowercase alphabelts
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
