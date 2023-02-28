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
	int j = 0;
	int l = strlen(s);
	char rev[l];

	for (i = l - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	s = rev;
}
