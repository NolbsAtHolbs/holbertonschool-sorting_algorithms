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
	listint_t *new = NULL;
	listint_t *move = NULL;

	if (list == NULL || *list == NULL)
	{
		return;
	}
	new = *list;
	new = new->next;

	while (new != NULL)
	{
		if (new->n < (new->prev)->n)
		{
			move = new->prev;
			new->prev = move->prev;

			if (move->prev != NULL)
				move->prev->next = new;

			else
				*list = new;

			move->next = new->next;

			if (new->next != NULL)
				new->next->prev = move;

			new->next = move;
			move->prev = new;
			new = new->next;
			print_list(*list);
		}
		else
			new = new->next;
	}
}
