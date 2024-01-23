#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - loop
 * @width: in1
 * @height: in2
 *Fatmasallam
 * Return: pointer
 */

int **alloc_grid(int width, int height)

{
	int **m;
	int A, B;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(sizeof(int *) * height);

	if (m == NULL)
		return (NULL);
	for (A = 0; height > A; A++)
	{

		m[A] = malloc(sizeof(int) * width);

		if (m[A] == NULL)
		{

			for (; A >= 0; A--)
				free(m[A]);

			free(m);
			return (NULL);

		}

	}

	for (A = 0; height > A; A++)
	{

		for (B = 0; width > B; B++)

			m[A][B] = 0;
	}

	return (m);

}
