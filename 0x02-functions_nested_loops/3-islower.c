#include "main.h"

/**
  * _islower - checks the code
  * Describes if a character is lowercase
  * @c: the integer value received
  * Return: 1 if true, and 0 if false
  */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);

}
