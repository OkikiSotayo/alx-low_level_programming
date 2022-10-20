#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of
 * a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start, *temp;
	size_t nchar = 0;

	start = malloc(sizeof(list_t));

	if (start == NULL)
		return (NULL);

	start->str = strdup(str);

	while (str[nchar])
		nchar++;

	start->len = nchar;
	start->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = start;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = start;
	}
	return (*head);
}
