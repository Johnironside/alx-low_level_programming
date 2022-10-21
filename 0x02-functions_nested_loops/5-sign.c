#include "main.h"

/**
  * print_sign - begins program execution
  * It prints the sign of numbers
  * @n: is the integer declared for it
  * Return: 1, 0 and -1
  */

int print_sign(int n)
{

	if (n > '0')
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);

	}
	else
	{
		_putchar('-');

		return (-1);
	}

	return (0);

}
