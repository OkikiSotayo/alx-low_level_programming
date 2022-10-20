#include "lists.h"

/**
 * add_node -function that adds a new node at the beginning of
 * a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *start;
	size_t a = 0;

	start = malloc(sizeof(list_t));
	if (start == NULL)
		return (NULL);

	while (str[a])
		a++;

	start->str = strdup(str);
	start->len = a;
	start->next = *head;
	*head = start;

	return (*head);
}
