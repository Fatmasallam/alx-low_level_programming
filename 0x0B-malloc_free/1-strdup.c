#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - new memory
 * @str: character
 * Return: 0
 *fatmasallam
 */

char *_strdup(char *str)

{
	char *abb;
	int iter, rig = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	iter = 0;
	while (str[iter] != '\0')
	{
		iter++;
	}

	abb = malloc(sizeof(char) * (iter + 1));

	if (abb == NULL)
	{
		return (NULL);
	}

	for (rig = 0; str[rig]; rig++)
	{
		abb[rig] = str[rig];
	}

	return (abb);
}
