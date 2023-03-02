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
	int i,j;
	int ld = strlen(dest);
	int ls = strlen(src);

	for (i = 0; i < ld; i++)
	{
		for (j = 0; j < ls; j++)
		{
			if (dest[i] == '\0')
			{
				dest[i] = src[j];
			}
		}
	}
	return (dest);
}
