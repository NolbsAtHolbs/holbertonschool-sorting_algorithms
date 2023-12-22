#include "sort.h"
#include <stdio.h>

/**
* swap - swaps two elements in an array
* @a: first element to be swapped
* @b: second element to be swapped
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
* selection_sort - sorts an array of integers in ascending order using the
* selection sort algorithm
* 
* @array: array to be sorted
* @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		size_t min_index = i;
		for (size_t j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			printf("After swap: ");

			for (size_t k = 0; k < size; k++)
			{
				printf("%d ", array[k]);
			}
			printf("\n");
		}
	}
}
