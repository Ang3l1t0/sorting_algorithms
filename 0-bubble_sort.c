#include "sort.h"

/**
 * bubble_sort - sort an array using bubble algorthm
 * @array: Array to be sorted
 * @size: Size of array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp, temp2;
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		temp2 = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp2 = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/*print_array(array, size);*/
			}
		}
		if (temp2 == 0)
			break;
		}
}
