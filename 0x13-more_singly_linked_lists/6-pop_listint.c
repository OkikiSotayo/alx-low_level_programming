#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n)
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: the data that was deleted or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_node;

	if (!head || !*head)
		return (0);

	head_node = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_node);
}
