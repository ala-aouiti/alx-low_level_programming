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

	for (i = 0; i < l / 2; i++)
	{
		char rev = s[i];

		s[i] = s[l - i - 1];
		s[l - i - 1] = rev;
	}
}
