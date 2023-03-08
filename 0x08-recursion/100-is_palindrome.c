#include "main.h"
#include <string.h>
/**
 * is_palindrome - Checks whether a string is a palindrome.
 *
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	if (*s == *(s + strlen(s) - 1))
	{
		return (is_palindrome(s + 1));
	}
	return (0);
}
/**
 * comparator - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
