#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You  are not allowed to include standard libraries
 * Retrn: 0
 */
int main(void)
{
	char main[] = "_putchar";
	int i = 0;
	while(main[i] != '\0')
	{
		i++;
	}
	_putchar('\n');
	return (0);
}
