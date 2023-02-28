#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: parameter pointer of type char
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(*s); i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
