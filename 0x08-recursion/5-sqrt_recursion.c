#include "main.h"
int act_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - square root
 * @n:num
 *fatmasallam
 * Return: result
 */
int _sqrt_recursion(int n)
{

if (n < 0)
{
	return (-1);
}

	return (act_sqrt_recursion(n, 0));

}

/**
 * act_sqrt_recursion -find
 * fatma sallam
 * @n:num
 * @it:var
 *
 * Return:results
 */
int act_sqrt_recursion(int n, int it)
{
if (i * it > n)
{
	return (-1);
}
if (it * it == n)
{
	return (it);
}

return (act_sqrt_recursion(n, it + 1));
}
