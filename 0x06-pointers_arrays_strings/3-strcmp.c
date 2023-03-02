#include "main.h"
#include <string.h>
/**
 * _strcmp - a function that compare two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: An integer greater than, equal to, or less than 0,
 * according as the string s1 is greater than, equal to,
 * or less than the string s2 (based on ASCII value comparison)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 > *s2) ? 1 : -1;
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (*s1 == '\0') ? -1 : 1;
	}
}
