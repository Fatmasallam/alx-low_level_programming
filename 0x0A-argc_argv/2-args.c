#include <stdio.h>
#include "main.h"

/**
 * main - print only
 * @argc: n
 * @argv: array
 *fatmasallam
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])

{
	int ite;


	for (ite = 0; ite < argc; ite++)
	{
		printf("%s\n", argv[ite]);

	}

	return (0);

}
