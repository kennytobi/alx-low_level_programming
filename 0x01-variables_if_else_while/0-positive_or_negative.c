#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints whether the stored number in the variable is positive or negative
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n >= 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
