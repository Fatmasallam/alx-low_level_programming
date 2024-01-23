#include "main.h"
#include <stdlib.h>

/**
 * create_array -create
 * @size: only size
 * @c:character
 * Description:creating arrays
 * Return:poiter if success
 *Fatmasallam
 */

char *create_array(unsigned int size, char c)

{
	char *string;
	unsigned int iteration;

	string = malloc(sizeof(char) * size);

	if (size == 0 || string == NULL)
	{
		return (NULL);
	}

	for (iteration = 0; iteration < size; iteration++)
	{
		string[iteration] = c;
	}
	return (string);

}
