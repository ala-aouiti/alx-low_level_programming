#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: parameter pointer of type int
 * @b: parameter pointer of type int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
