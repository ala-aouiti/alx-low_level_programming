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
	int l = strlen(str);

	for (i = 0; i <= l; i = i + 2)
	{
		if ((i % 2) = 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
