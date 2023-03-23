#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative - check if his arg is postive or negative
 *@n: the current value to check
 */

void positive_or_negative(int n)
{
	/*
	*int n;
	*srand(time(0));
	*n = rand() - RAND_MAX / 2;
	*/

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	/*return (0);*/
}
