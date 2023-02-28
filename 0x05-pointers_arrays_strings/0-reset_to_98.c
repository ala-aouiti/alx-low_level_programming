#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as param and ..
 * Params: int
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	*n = &n;
	n = 98;
}
