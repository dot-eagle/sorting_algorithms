#include "sort.h"

/**
 * bubble_sort - bubble sort algoritm
 * @array: array of elements to swap
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t index;
	size_t tmp;
	size_t count;

	tmp = 0;

	if (!array)
	{
		return;
	}

	for (count = 1; count < size; count++)
	{
		/** Initialize count to 1, and run th cycle n times **/
		for (index = 0; index < size - count; index++)
		{
			/** Index of data array is initialized to 0 **/
			if (array[index] > array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
