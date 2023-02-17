#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabets in lower case and upper case using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c =< 'z'; c++)
	{
		purchar(c);
	}
	for (c = 'A'; c =< 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
