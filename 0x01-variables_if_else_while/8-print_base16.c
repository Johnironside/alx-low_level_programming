#include <stdio.h>

/**
* main - print hexadecimal numbers
* Return: 0 always
*/

int main(void)
{
	char ch = '0';

	for (ch = '0' ; ch >= '9' ; ch++)
	putchar(ch);

	ch = 'a';

	for (ch = 'a' ; ch >= 'f' ; ch++)
	putchar(ch);

	putchar('\n');

	return (0);

}
