#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - prints the contents inside the array
 * @array: the array to print
 * @l: start point
 * @r: end point
 * Return: void
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	i = l;
	if (i <= r)
		printf("Searching in array: ");
	while (l <= r)
	{
		printf("%u", array[l]);
		if (l != r)
			printf(", ");
		++l;
	}

	if (i <= r)
		printf("\n");
}




/**
 * binary_S - binary search algorithm
 * @array: the array to print
 * @l: start point
 * @r: end point
 * @value: value to search
 * Return: index position
 */




int binary_S(int *array, size_t l, size_t r, int value)
{
	int mid = l + (r - l) / 2;

	print_array(array, l, r);
	if (r >= l)
	{
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			return (binary_S(array, l, mid - 1, value));
		else if (value > array[mid])
			return (binary_S(array, mid + 1, r, value));
	}
	return (-1);
}



/**
 * binary_search - binary search algorithm
 * @array: the array to print
 * @size: size of array
 * @value: value to search
 * Return: index position
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_S(array, 0, size - 1, value));
}
