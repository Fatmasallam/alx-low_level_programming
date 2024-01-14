#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print only
 * @argc: num
 * @argv: array
 *fatmasallam
 * Return: 0 or 1
 */

int main(int argc, char *argv[])

{
	int number, it, resultsof;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	resultsof = 0;

	if (number < 0)
	{
		printf("0\n");

		return (0);
	}

	for (it = 0; it < 5 && number >= 0; it++)
	{

		while (number >= cents[it])

		{

			resultsof++;

			number -= cents[it];

		}

	}


	printf("%d\n", resultsof);
	return (0);

}
