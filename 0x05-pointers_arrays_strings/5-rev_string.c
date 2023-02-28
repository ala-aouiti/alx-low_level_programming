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
	char rev[];

	for (i = l - 1; i >= 0; i--)
	{
		rev = rev + s[i];
	}
	s = rev;
}
