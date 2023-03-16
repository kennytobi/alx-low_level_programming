#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: memory to check for
 * @size: size of the memory
 * Return: pointer if memory has been allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
