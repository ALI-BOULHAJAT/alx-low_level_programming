#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* Program assign a random number and detect */
/*if the number is negative or positive or null */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* check if the number is positive */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/* ckeck if the number is negative */
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	/* check if the number is 0 */
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
