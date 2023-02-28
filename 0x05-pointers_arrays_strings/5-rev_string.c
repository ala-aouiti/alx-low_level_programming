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

	for (i = strlen(s); i >= 0; i--)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			s[j] = s[i];
		}
	}
}
