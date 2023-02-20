#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  * main - this is the main function
 *  *
 *  * Return: Value 0 always
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);

}
