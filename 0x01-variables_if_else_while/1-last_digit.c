#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("The last didgit of %d is %d and is 0\n", n, ld);
	else if (ld < 6 && ld != 0)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	return (0);
}
