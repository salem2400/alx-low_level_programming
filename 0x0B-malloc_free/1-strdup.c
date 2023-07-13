#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{
	char *cpy;

	cpy = _strdup (str);
		if (cpy == NULL)
		{
			return (NULL);
		}
	return (cpy);
}
