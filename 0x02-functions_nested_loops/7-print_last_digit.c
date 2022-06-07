#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int i)
{
	int nc;

	if (i < 0)
	{
		nc = -1 * (i % 10);
		_putchar(nc + '0');
		return (nc);
	}
	else
	{
		nc = i % 10;
		_putchar(nc + '0');
		return (nc);
	}
}
