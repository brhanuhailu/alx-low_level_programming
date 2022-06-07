#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @n: int type number
 * Return: absolute value of @n
 */
int _abs(int in)
{
	if (in < 0)
	{
		return (in * -1);
	}
	else
	{
		return (in);
	}
}
