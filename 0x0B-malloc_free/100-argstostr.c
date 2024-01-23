#include "main.h"
#include <stdlib.h>

/**
 * argstostr - entry
 * @ac: input
 * @av: array
 *Fatmasallam
 * Return: 0 always
 */

char *argstostr(int ac, char **av)

{
	int ite, non, rig = 0, lit = 0;

	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ite = 0; ite < ac; ite++)
	{
		for (non = 0; av[ite][non]; non++)
			lit++;

	}
	lit += ac;

	string = malloc(sizeof(char) * lit + 1);

	if (string == NULL)
		return (NULL);

	for (ite = 0; ite < ac; ite++)
	{

		for (non = 0; av[ite][non]; non++)
		{

		string[rig] = av[ite][non];

		rig++;
		}

		if (string[rig] == '\0')
		{
		string[rig++] = '\n';
		}

	}

	return (string);

}
