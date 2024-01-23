#include "main.h"
#include <stdlib.h>
/**
 * str_concat - ending
 * @s1: in1
 * @s2: in2
 *Fatmasallam
 * Return:s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *concat;
	int iter, ciig;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	iter = ciig = 0;
	while (s1[iter] != '\0')
	{
		iter++;
	}
	while (s2[ciig] != '\0')
	{
		ciig++;
	}
	concat = malloc(sizeof(char) * (iter + ciig + 1));

	if (concat == NULL)
		return (NULL);

	iter = ciig = 0;

	while (s1[iter] != '\0')
	{
		concat[iter] = s1[iter];
		iter++;
	}
	while (s2[ciig] != '\0')
	{
		concat[iter] = s2[ciig];
		iter++, ciig++;
	}

	concat[iter] = '\0';

	return (concat);
}
