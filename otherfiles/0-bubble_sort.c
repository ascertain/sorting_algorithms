#include <stddef.h>
#include "sort.h"

void swap(int *a, int *b);
/**
 * bubble_sort - sort an array of int using the bubble sort method
 * @array: The array to sort
 * @size: the size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int num_swap;

	if (size < 2 || array == NULL)
		return;
	while (1)
	{
		i = 0;
		num_swap = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				num_swap = 1;
			}
			i++;
		}
		if (num_swap == 0)
			break;
	}
}

/**
 * swap - swaps the value of two int
 * @a: the first int
 * @b: the second int
 *
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
