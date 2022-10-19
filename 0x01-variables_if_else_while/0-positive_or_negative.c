#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of program
 * return:0 - if positive print 0 else print 1
 */
int main(void)
{
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else 
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
