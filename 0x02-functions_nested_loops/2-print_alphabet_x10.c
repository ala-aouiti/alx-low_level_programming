#include "main.h"
/**
 * print_alphabet - print alphabets_X_10 in lowercase
 * void: no parameter
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char al;
	int i;
	for (i = 0; i <= 10; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
