#include "main.h"

/**
 *
 *
 * Print_alphabet - this is print_alphabet function
 *
 * Return: no return value
 *
 *
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
