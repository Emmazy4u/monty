#include "monty.h"

int arg_check(int index, char *arg)
{
	if (index == 0)
	{
		if (arg == NULL || !(is_int(arg)) || *arg == '\0')
			return (1);
		else
			return (0);
	}
	else
	{
		if (arg == NULL || *arg == '\0')
			return (0);
		else
			return (-1);
	}
	printf("argument check failed for some reasons\n");
	return (0);
}
