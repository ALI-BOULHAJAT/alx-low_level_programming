#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* description for main function */
/* Program assign a random number and detect */
/* if the number is negative or positive or null */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
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
