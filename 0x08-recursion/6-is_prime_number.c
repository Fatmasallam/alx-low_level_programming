#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - find if num is int
 * @n:num
 *
 * Return:1 if num is prime 0 if else
 */
int is_prime_number(int n)
{
if (n <= 1)
{
	return (0);
}
	return (actual_prime(n, n - 1));

}

/**
 * _prime - find if
 * @n:num
 * @it: var
 *
 * Return:1 if right
 */
int _prime(int n, int it)
{
if (it == 1)
{
	return (1);
}
if (n % it == 0 && it > 0)
{
	return (0);
}
	return (actual_prime(n, i - 1));

}
