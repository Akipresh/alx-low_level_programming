#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Points the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
