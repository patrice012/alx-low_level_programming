#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative - check if his arg is postive or negative
 *@n: the current value to check
 */

void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
        else
		printf("%d is zero\n", n);
}
