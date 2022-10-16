#include <stdio.h>

/**
* main - prints the numbers from 0-9
* Return: 0 if executed properlly, non-zero otherwise
*/

int main(void)
{
	int i = '0';

	for (i = '0' ; i <= '9' ; i++)
	putchar(i);
	putchar('\n');

	return (0);

}
