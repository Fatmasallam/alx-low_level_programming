#include "main.h"

/**
  * _strlen_recursion - fun
  * @s:parameter
  * Return: l
  */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{

	n++;

	n += _strlen_recursion(s + 1);

	}

	return (n);
}
