#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  * main - this is the main function
 *  *
 *  * Return: Value 0 always
 */
int main(void)
{
	char alph_l = 'a';
	char alph_u = 'A';

	while (alph_l <= 'z')
	{
		putchar(alph_l);
		alph_l++;
	}
	while (alph_u <= 'Z')
	{
		putchar(alph_u);
		alph_u++;
	}
	putchar('\n');
	return (0);
}
