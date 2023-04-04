#include "lists.h"
/**
 * print_listint - a function that prints all element of a list
 * @h: pointer to first node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	printf("%d\n", h->n);
	return (count);
}
