#include "main.h"

/**
  * print_alphabet_x10 - checks the code
  * Return: Always 0
  */

print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

	_putchar('\n');
	i++;

	}
}
