#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts only
 * @s:s
 *fatmasallam
 * Return:integar
 */

int _atoi(char *s)

{
	int ite, dn, no, length, fo, digits;

	ite = 0;
	dn = 0;
	no = 0;
	length = 0;
	fo = 0;
	digits = 0;

	while (s[length] != '\0')
	{

		length++;
	}

	while (ite < length && fo == 0)
	{
		if (s[ite] == '-')
	{

			++dn;
	}
		if (s[ite] >= '0' && s[ite] <= '9')
		{
			digit = s[ite] - '0';
			if (dn % 2)
			{
				digits = -digits;
			}
			no = no * 10 + digits;
			fo = 1;
			if (s[ite + 1] < '0' || s[ite + 1] > '9')
			{
				break;
			}
			fo = 0;
		}
		ite++;
	}
	if (fo == 0)
	{
		return (0);
	}
	return (n);
}
/**
 * main - multiply
 * @argc: n
 * @argv: array
 *fatmasallam
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
		
{
	int resulting, number1, number2;
		
	if (argc < 3 || argc > 3)

	{

		printf("Error\n");

		return (1);

	}
		

		
	number1 = _atoi(argv[1]);
		
	number2 = _atoi(argv[2]);
		
	resulting = number1 * number2;
		

		
	printf("%d\n", resulting);


	return (0);
		
}
