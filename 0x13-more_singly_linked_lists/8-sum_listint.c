#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of data in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum_list = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum_list += temp->n;
		temp = temp->next;
	}

	return (sum_list);
}
