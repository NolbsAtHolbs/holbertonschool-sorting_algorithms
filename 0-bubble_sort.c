#include "sort.h"
#include <stdio.h>
/**
* bubble_sort - sorts an array of ints in ascending order w/ Bubble sort algo
* @array: array to sort
* @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	if (array == NULL || size == 0)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				for (k = 0; k < size; k++)
				{
					printf("%d", array[k]);

					if (k < size - 1)
					{
						printf(", ");
					}
				}
				printf("\n");
			}
		}
	}
}
