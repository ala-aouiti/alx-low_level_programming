#include <stdio.h>
#include <string.h>
#include "main.h"

/* betty style doc for function main goes there */
/**
 *  * main - this is the main function
 *  *
 *  * Return: Value 0 always
 */
int main(void)
{
	char p[] = "_putchar";
	int l = strlen(p);
	int i;

	for (i = 0; i < l; i++)
	{
		putchar(p[i]);
	}
	putchar('\n');
	return (0);

}
