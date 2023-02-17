#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabets in lower case using only putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
