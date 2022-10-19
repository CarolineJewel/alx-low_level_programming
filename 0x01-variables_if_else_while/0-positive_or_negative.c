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
	t = rand() - RAND_MAX / 2;
	if (t>0)
	{
		printf("%d is positive\n", t);
	}
	else if (t < 0)
	{
		printf("%d is negative\n", t);
	}
	else 
	{
		printf("%d is zero\n", t);
	}
	return (0);
}
