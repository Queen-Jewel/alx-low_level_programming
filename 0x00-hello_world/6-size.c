#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using the main function
 *
 * this program prints "Programming is like building a multilingual puzzle
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	long int li;
	long long int lli;
	char c;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
