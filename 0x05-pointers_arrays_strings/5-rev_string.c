#include "main.h"
#include <string.h>

/**
 * rev_string - string in reverse
 * @s: parameter pointer of type char
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int l = strlen(s);

	for (i = l; i >= 0; i--)
	{
		s = s + s[i];
	}
}
