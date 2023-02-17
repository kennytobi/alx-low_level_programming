#include <stdio.h>
/**
 * main -  Entry point
 * Description: Prints the alphabets in lower case except q and e using
 * only putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
