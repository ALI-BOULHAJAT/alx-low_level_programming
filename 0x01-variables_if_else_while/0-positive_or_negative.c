#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* this program will assign a random number to the variable n each time it is executed.*/
/*Complete the source code in order to print whether the number stored in the variable n is positive or negative. */
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
