#include "main.h"
/**
 * print_diagonal - Prints a diagonal line of '\' characters to the console
 *
 * @n: The number of times to print the '\' character
 *
 * Description: If n is greater than 0, prints n '\' characters to the console
 * followed by a newline character '\n'. If n is 0 or less, prints only
 * a newline
 * character.
 **/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
