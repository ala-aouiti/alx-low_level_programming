#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as param and ..
 * n: parameter of type int
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	int x;

	n = &x;
	*n = 98;
	x = 98;
}
