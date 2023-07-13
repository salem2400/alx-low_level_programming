#include "main.h"
/**
 * *create_array - function used to creat array
 * @size: parameter storge the size of the array
 * @c: parametar storge the value of all singel index in the array
 * @*str: varuabel used to storg a pointer of the array
 * Description: create array of size size and assign char c
 * Return: null if the function fail
 * and pointre str returnd if success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int num;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (num = 0 ; num < size ; num++)
		str[num] = c;
	free(str);
	return (str);
}
