
#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 *
 * @array: of elements to swap
 * @list: of the array
 *
 * Return: void, nothing
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
	{
		return;
	}
	method_quick_sort(array, size, 0, size - 1);
}

/**
 * swap - swap numbers method
 * 
 * @array: of list of elements
 * @size: of array
 * @a: varieble
 * @b: variable
 */

void swap(int *array, size_t size, int a, int b)
{
	int tmp;

	if (array[a] != array[b])
	{
		tmp = array[a];
		array[a] = array[b];
		array[b] = tmp;

		print_array(array, size);
	}
}

/**
 * method_quick_sort - sorting function
 * @arraay: list of elements
 * @size: of array
 * @left: first array data/element
 * @right: last array data/element
 */

void method_quick_sort(int *array, size_t size, int left, int right)
{
	int idx_partition;

	if (left < right)
	{
		idx_partition = lomuto_partition(array, size, left, right);
		method_quick_sort(array, size, left, idx_partition - 1);
		method_quick_sort(array, size, idx_partition + 1, right);
	}

}

/**
 * lomuto_partition - scheme partition algorithm
 * @array: list of elements
 * @size: of the array
 * @fst_elmnt: first array data/element
 * @lst_elmnt: last array data/elemnt
 *
 * Return: left
 */

int lomuto_partition(int *array, size_t size, int fst_elmnt, int lst_elmnt)
{
	int pivot = array[lst_elmnt];
	int left = fst_elmnt, right = lst_elmnt, iterator = left;

	while (iterator <= right)
	{
		if (array[iterator] < pivot)
		{
			swap(array, size, left, iterator);
			left++;
		}
		iterator++;
	}
	swap(array, size, left, right);
	return (left);
}
