#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int inial = 1;
	int total = 0;

	while (inial < 1024)
	{
		if (inial % 3 == 0)
			total += inial;
		else if (inial % 5 == 0)
			total += inial;

		inial++;
	}
	printf("%d\n", total);

	return (0);
