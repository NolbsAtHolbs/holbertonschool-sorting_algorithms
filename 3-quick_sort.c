#include "sort.h"
#include <stdio.h>
/**
* integer_swapper - swaps two integers
* @first: first element to swap
* @second: second element to swap
*/
void integer_swapper(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

/**
* lomuto_partition_scheme - pivot is always the last element of the
*  array being partitioned
* @array: array to partition
* @size: size of array
* @low: lowest integer in array
* @high: highest integer in array
* Return: index where partition ended up
*/
int lomuto_partition_scheme(int array[], size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j = 0;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			integer_swapper(&array[i], &array[j]);
		}
	}
	print_array(array, size);
	integer_swapper(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
* quick_sort - sorts an array of integers in ascending order using the
* quick sort algorithm
*
* @array: array to be sorted
* @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (size > 0)
	{
		lomuto_partition_scheme(array, size, 0, size - 1);
	}
}
