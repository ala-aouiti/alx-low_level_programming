#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: parameter pointer of type int
 * @n: the number of elements to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(%d", ",a[i]);
	}
	printf("\n");
}
