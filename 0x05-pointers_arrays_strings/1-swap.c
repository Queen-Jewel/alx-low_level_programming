#include "main.h"

/**
 * swap_int - swaps two integars
 * @a: first integar
 * @b: second integar
 */

void swap_int(int *a, int *b)
{
	int con = *a;

	*a = *b;
	*b = con;
}
