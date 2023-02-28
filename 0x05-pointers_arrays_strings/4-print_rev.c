#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: parameter pointer of type char
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
