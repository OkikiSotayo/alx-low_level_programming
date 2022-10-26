#include "lists.h"

/**
 * reverse_listint -  function that reverses a listint_t linked list
 * @head: pointer to pointer of first list element
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *actual;

	temp = NULL;
	actual = NULL;
	while (*head != NULL)
	{
		actual = *head;
		*head = (*head)->next;
		actual->next = temp;
		temp = actual;
	}
	*head = actual;

	return (*head);
}
