#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	i = 0;

	for (i = 0; i < strlen(s); i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (1);
}
