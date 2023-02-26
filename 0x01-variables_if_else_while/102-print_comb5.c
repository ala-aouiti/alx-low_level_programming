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

	while (a < 9)
	{
		int b = a + 1;

		while (b <= 9)
		{
			int c = b + 1;

			while (c <= 9)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
		b++;
		}
	a++;
	}
	putchar('\n');
	return (0);

}
