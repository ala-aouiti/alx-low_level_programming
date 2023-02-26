#include <stdio.h>
/*
 *
 *
 *
 * this is main description
 *
 *
 *
 * */
int fact(int n)
{
	int reval = 1;
	
	while (n != 1)
	{
		reval *= n--;
	}
	return reval;
}

int main(void)
{
	int  val = fact(3);
	printf("factorial of 3 is %d\n",val);
	printf("factorial of 2 is equal to %d\n",fact(2));

	return (0);
}
