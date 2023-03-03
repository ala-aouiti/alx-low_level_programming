#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string and the return
 * @src: the string to be copied
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int l = strlen(dest);

	for (i = 0; i < l+1; i++)
	{
		if (dest[i] == '\0')
		{
			dest[i] = src[i];
		}
	}
	dest[l] = '\0';
	return (dest);
}
