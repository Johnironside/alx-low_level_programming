#include <stdio.h>

/**
* main - prints the alphabets 'a' - 'z'
* Return: 0 when executed properly, and non-zero otherwise
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);

}
