#include <stdio.h>
/**
* main - main block
* Description: Print alphabets in lower case.
* Return: 0 on success
*/
int main(void)
{
	char ch;	
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
