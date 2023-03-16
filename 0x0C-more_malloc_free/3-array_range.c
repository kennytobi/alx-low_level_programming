#include <stdlib.h>
#include "main.h"
/**
 * array_range - A function that creates an array of integers.
 * @min: first function
 * @max: second function
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
