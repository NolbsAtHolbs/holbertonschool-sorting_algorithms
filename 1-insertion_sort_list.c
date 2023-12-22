#include "sort.h"
#include <stdio.h>
/**
* insertion_sort_list - sorts a doubly linked list of integers in ascending order
* using the insertion sort algorithm
*
* @list: doubly linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = *list;

	if (list == NULL)
	{
		return;
	}

	while (current != NULL)
	{
		listint_t *next = current->next;
		current->prev->next = current->next;

		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
		listint_t *prev = NULL;

		while (sorted != NULL && sorted->n > current->n)
		{
			prev = sorted;
			sorted = sorted->next;
		}
		current->prev = prev;
		current->next = sorted;

		if (prev != NULL)
		{
			prev->next = current;
		}
		else
		{
			sorted = current;
		}
		print_list(*list);
		current = next;
	}
	*list = sorted;
}
