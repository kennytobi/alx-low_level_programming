#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first function
 * @s2: second function
 * @n: integer representing the number of bytes
 * Return: NULL if function fails else return the string of the function
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	concat_str = (char *) malloc((len1 + n + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	strcpy(concat_str, s1);
	strncat(concat_str, s2, n);
	concat_str[len1 + n] = '\0';
	return (concat_str);
}
