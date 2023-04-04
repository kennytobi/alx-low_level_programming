#include "lists.h"
/**
 * insert_nodeint_at_index - insets a new node at a given position in a
 * listint_t
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added. index start at 0
 * @n: value to be stored in the new node
 * Return: the address of the node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i;

	if (idx == 0)
		return (add_nodeint(head, n));
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
