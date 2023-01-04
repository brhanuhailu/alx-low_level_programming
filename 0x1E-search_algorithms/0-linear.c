#include "search_algos.h"

/**
*linear_search - uses linear search algorithm to find an element in an array
*@array: array to be traversed
*@size: size of array
*@value: element to be searched
*Return: Element's array index if successful and -1 if not
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
		return (-1);
}
