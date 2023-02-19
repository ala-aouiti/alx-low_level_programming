#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  * main - this is the main function
 *  *
 *  * Return: Value 0 always
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if ((alph != 'q') && (alph != 'e'))
		{
			putchar(alph);
			alph++;
		}
		else
		{
			alph++;
		}
	}
	putchar('\n');
	return (0);
}
