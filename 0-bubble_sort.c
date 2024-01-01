#include "sort.h"

/**
 * bubble_sort -  a function that sorts an array of integers in ascending order
 * @array: array List
 * @size: the size of array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j + 1] < array[j])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	
	}
}
