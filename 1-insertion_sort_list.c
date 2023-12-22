#include "sort.h"
#include <stdio.h>
/**
* insertion_sort_list - sorts a doubly linked list of ints in ascending order
* using the insertion sort algorithm
*
* @list: doubly linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		exit(EXIT_FAILURE);

	current = *list;
	current = current->next;

	while (current)
	{
		while (current->prev && current->n < (current->prev)->n)
		{
			temp = current;

			if (current->next)
				(current->next)->prev = temp->prev;

			(current->prev)->next = temp->next;
			current = current->prev;
			temp->prev = current->prev;
			temp->next = current;

			if (current->prev)
				(current->prev)->next = temp;

			current->prev = temp;

			if (temp->prev == NULL)
				*list = temp;

			print_list(*list);
			current = current->prev;
		}
		current = current->next;
	}
}
