#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - display the string the last digit of...
* Return: 0 if executed properly, and non-zero otherwise
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lastDigit = n % 10;

	if (n % 10 > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n",
	n, lastDigit);
	}
	else if (n % 10 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if ((n % 10 < 6) & !0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n",
	n, lastDigit);
	}
	else
	{
	printf("Not Valid\n");
	}

	return (0);
}
