#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		_putchar(j + '0');
		j++;
	}
	_putchar('\n');
}
