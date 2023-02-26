#include "main.h"
/**
 * Print_alphabet function
 *
 * description: print alphabet in lowercase
 *
 * Nothing to return
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
