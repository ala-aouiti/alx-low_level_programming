#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: parameter pointer of type char
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int l = strlen(str);
	int n = (l - 1) / 2;

	if (l%2)
	{
		for (i = l/2; i <= l; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n+1; i <= l; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
