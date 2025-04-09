#include "sort.h"
#include <stddef.h>
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: no needed just sort
 */

void selection_sort(int *array, size_t size)
{

	size_t i, j, position, save;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		position = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[position])
			{
				position = j;
			}
		}
		if (position != i)
		{
			save = array[i];
			array[i] = array[position];
			array[position] = save;
			print_array(array, size);
		}
	}
}
