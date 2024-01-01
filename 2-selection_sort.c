#include "sort.h"
/**
 * selection_sort - selection algorithm
 * @array: array of ints
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_index;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        // Assume the current index is the minimum
        min_index = i;

        // Find the minimum element in the unsorted part of the array
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}
