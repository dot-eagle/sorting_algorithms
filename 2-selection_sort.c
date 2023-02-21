#include "sort.h"

/**
 * selection_sort - sort array using selection sort algorithm
 *
 * @array: of elements to swap
 * @size: of array
 *
 * Return: void, nothng
 */

void selection_sort(int *array, size_t size)
{
	size_t array_indx, arr_runner, arr_selector;

	int value, found;

	found = 0;

	if (!array)
	{
		return;
	}

	for (array_indx = 0; array_indx < size; array_indx++)
	{
		arr_selector = array_indx;
		for (arr_runner = array_indx; arr_runner < size; arr_runner++)
		{
			if (array[arr_selector] > array[arr_runner])
			{
				arr_selector = arr_runner;
				found = 1;
			}
		}
		if (found)
		{
			value = array[array_indx];
			array[array_indx] = array[arr_selector];
			array[arr_selector] = value;
			print_array(array, size);
		}
		found = 0;
	}
}
