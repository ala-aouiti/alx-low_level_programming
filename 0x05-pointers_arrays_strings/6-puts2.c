#include "main.h"
#include <string.h>

/**
 * puts2 - print every other char
 * @str: parameter pointer of type char
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int l = strlen(s);

	for (i = 0; i <= l; i+2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
