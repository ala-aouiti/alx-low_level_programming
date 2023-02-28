#include "main.h"

/**
 * _strlen - print the length of a string
 * @s: parameter pointer of type int
 *
 * Return: int => the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')	
	{
		i++;
	}
	return (i);
}
