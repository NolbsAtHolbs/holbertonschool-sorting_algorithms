#include "sort.h"
#include <stdio.h>
/**
* selection_sort - sorts an array of integers in ascending order using the
* selection sort algorithm
* 
* @array: array to be sorted
* @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min_index;
	int temp

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			temp = array[i]
			array[i] = array[min_index];
			array[min_index] = temp;
			printf("After swap: ");

			for (j = 0; j < size; j++)
			{
				printf("%d ", array[j]);
			}
			printf("\n");
		}
	}
}
