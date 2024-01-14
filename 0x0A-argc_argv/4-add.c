#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check
* @s: array
*fatmasallam
* Return: 0
*/
int check_num(char *s)
{
	unsigned int counting;

	counting = 0;

		while (counting < strlen(s))
	{
			if (!isdigit(s[counting]))
				return (0);

			counting++;
	}
		return (1);
}

/**
* main - Print
* @argc:for count
* @argv:n
*fatmasallam
* Return:0
*/

int main(int argc, char *argv[])

{
	int counting;
	int s_to_integ;
	int summing = 0;

	counting = 1;

	while (counting < argc)
	{
		if (check_num(argv[counting]))

		{
			s_to_integ = atoi(argv[counting]);
			summing += s_to_integ;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		counting++;
		}

		printf("%d\n", summing);

		return (0);
}
