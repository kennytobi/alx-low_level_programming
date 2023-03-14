#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: on success, returns a pointer to a newly allocated spaces in memory
 * which contains the content of s1, followed by the content of s2, and null
 * terminated. it returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concat_str = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	strcpy(concat_str, s1);
	strcpy(concat_str, s2);
	return (concat_str);
}
