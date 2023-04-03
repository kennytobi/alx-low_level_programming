#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: node to use
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
