#include <stdio.h>

/**
* main - prints the alphabets without q and e
* Return: always 0
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');

	return (0);


}
