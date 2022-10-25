#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the 1st node of the linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodenum = 0;

	while (h != 0)
	{
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			nodenum++;
		}
		if (h->next != NULL)
		{
			printf("%d\n", h->n);
			nodenum++;
		}
		h = h->next;
	}

	return (nodenum);
}
