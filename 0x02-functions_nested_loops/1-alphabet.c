#include "main.h"

/**
 * main - this is the main function
 *
 * Return: Value 0 always
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
	return;
}
