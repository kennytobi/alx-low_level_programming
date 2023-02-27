#include "main.h"
/**
 * swap_int - function that swap the value of two integers
 * @a: first pointer to be swapped
 * @b: second pointer to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
