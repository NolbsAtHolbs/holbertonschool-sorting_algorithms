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
	listint_t *new;
	listint_t *temp;

	if (list == NULL || *list == NULL)
		return;

	new = *list;

	while (new != NULL)
	{
		temp = new;
		new = new->next;
		temp->prev->next = temp->next;

		if (temp->next != NULL)
			temp->next->prev = temp->prev;

		while (temp->prev != NULL && temp->prev->n > temp->n)
		{
			temp->prev->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			temp->prev = temp->prev->prev;
			temp->next = temp->prev->next;
			temp->prev->next = temp;

			if (temp->next != NULL)
				temp->next->prev = temp;
     	}
		print_list(*list);
	}
}
