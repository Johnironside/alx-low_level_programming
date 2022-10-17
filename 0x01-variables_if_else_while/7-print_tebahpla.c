#include <stdio.h>

/**
* main - Prints the alphabets in reverse form
* Return: 0 if executed properly and non-zero otherwise
*/

int main(void)
{
	char ch = 'z';

	for (ch = 'z' ; ch >= 'a' ; ch--)
	putchar(ch);
	putchar('\n');

	return (0);


}
