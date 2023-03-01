#include "main.h"
#include <string.h>

/**
 * _strcpy - copy src to dest
 * @dest: destination string and the return
 * @src: the string to be copied
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int l = strlen(src);

	for (i = 0; i < l; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
