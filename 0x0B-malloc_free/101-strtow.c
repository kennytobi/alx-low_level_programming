#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * strtow - splits a string into words.
 * @str: the string to split
 * Return: if str is NULL, str is emoty or memory allocation failes, return
 * NULL otherwise, returns a pointer to an array of strings (words).
 * the last element of the array is NULL.
 */
char **strtow(char *str)
{
        char **words;
        int word_count, i, j, start, end, len, k;

        if (str == NULL || strlen(str) == 0)
        {
                return (NULL);
        }
        word_count = 0;
        i = 0;
        while (str[i] != '\0')
        {
                if (!isspace(str[i]))
                {
                        word_count++;
                        while (isspace(str[i]) && str[i] != '\0')
                        {
                                i++;
                        }
                }
                else
                {
                        i++;
                }
        }
        words = (char **) malloc((word_count + 1) * sizeof(char *));
        if (words == NULL)
        {
                return (NULL);
        }
        i = 0;
        j = 0;
        while (str[i] != '\0')
        {
                if (!isspace(str[i]))
                {
                        start = i;
                        while (!isspace(str[i]) && str[i] != '\0')
                        {
                                i++;
                        }
                        end = i;
                        len = end - start;
                        words[j] = malloc((len + 1) * sizeof(char));
                        if (words[j] == NULL)
                        {
                                for (k = 0; k < j; k++)
                                {
                                        free(words[k]);
                                }
                                free(words);
                                return (NULL);
                        }
                        strncpy(words[j], &str[start], len);
                        words[j][len] = '\0';
                        j++;
                }
                else
                {
                        i++;
                }
        }
        words[word_count] = NULL;
        return (words);
}
