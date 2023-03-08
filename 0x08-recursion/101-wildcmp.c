#include "main.h"
/**
 * wildcmp - Compares two strings and checks if they can be considered
 * identical
 * @s1: the first string
 * @s2: the scond string
 * Return: 1 if the string can be considered identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
			s2++;
		if (*(s2 + 1) == '\0')
			return (1);
		{
			if (wildcmp(s1, s2 + 1))
				return (1);
			s1++;
		}
		return (0);
	}
	if (s1 == s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
