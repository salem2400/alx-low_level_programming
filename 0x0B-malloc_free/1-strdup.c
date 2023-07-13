#include "main.h"
#include <stdlib.h>
#include <string.h>
char *_strdup(char *str)
{
	char *cpy;

	cpy = _strdup (str);
	cpy = malloc(sizeof(char *));
	if (cpy == NULL)
	{                         
		return (NULL);
	}
	while (strcmp(str, cpy) != 0)
	{
		int i;

		i = 0;
		i++;
		cpy [i] = str [i];
		if (strcmp(str, cpy) == 0)
		{
			return (NULL);
		}
	}
return (str);
}
