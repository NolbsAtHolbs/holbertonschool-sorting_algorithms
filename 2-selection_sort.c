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
	size_t mindex;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		mindex = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mindex])
			{
				mindex = j;
			}
		}
		if (mindex != i)
		{
			temp = array[i];
			array[i] = array[mindex];
			array[mindex] = temp;

			for (j = 0; j < size; j++)
			{
				printf("%d ", array[j]);

				if (j < size - 1)
				{
					printf(",");
				}
			}
			printf("\n");
		}
	}
}
