#include "main.h"

/**
  * _isalpha - begins program execution
  * Description: checks for alphabets
  * @c: integer declared
  * Return: 1 if true, 0 otherwise
  */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

