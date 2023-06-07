#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a linked list
 * @head: Points to the head of the list
 * Return: if list is empty - 0
 *		else - sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
