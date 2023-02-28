#include "main.h"

/**
 * _puts - print a string
 * @str: parameter pointer of type char
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
