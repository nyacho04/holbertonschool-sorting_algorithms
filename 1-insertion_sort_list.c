#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm.
 * @list: Double pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !(*list) || !(*list)->next)
	return;

	current = (*list)->next;
	while (current)
	{
	temp = current;
	while (temp->prev && temp->n < temp->prev->n)
	{
		temp->prev->next = temp->next;
		if (temp->next)
		temp->next->prev = temp->prev;

		temp->next = temp->prev;
		temp->prev = temp->next->prev;
		temp->next->prev = temp;

		if (temp->prev)
		temp->prev->next = temp;
	else
	*list = temp;

	print_list(*list);
	}
	current = current->next;
	}
}
