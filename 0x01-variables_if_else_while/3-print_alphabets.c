#include <stdio.h>

/**
* main - prints the alphabets 'a' - 'z' and 'A' - 'Z'
* Return: 0 when executed properly, and non-zero otherwise
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	putchar(ch);

	ch = 'A';

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
