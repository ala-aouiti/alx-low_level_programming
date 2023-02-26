#include "main.h"

/* betty style doc for function main goes there */
/**
 *  * main - this is the main function
 *  *
 *  * Return: Value 0 always
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
	return;

}
