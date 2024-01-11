#include "main.h"

int _pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome -find
 * @s:st
 *fatmasallam
 * Return: 1 if right
 */
int is_palindrome(char *s)
{
if (*s == 0)
{
	return (1);
}

	return (_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - find
 * @s:calc
 *
 * Return:ll
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return (0);
}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * _pal -chekkk
 * @s:s
 * @in:var
 * @l:length
 *
 * Return:1 if right
 */
int _pal(char *s, int in, int l)
{
if (*(s + in) != *(s + l - 1))
{
	return (0);
}
if (in >= l)
{
	return (1);
}

	return (_pal(s, in + 1, l - 1));
}

