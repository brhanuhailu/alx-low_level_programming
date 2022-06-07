#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char main[] = "_putchar";
	int i = 0;

	while (main[i] != '\0')
	{
		_putchar(main[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
