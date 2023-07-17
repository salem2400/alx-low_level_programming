#include <unistd.h>
#include "main.h"
/**
 * _putcher - function use the wriet function
 * to wriet one character
 * @c:parameter storge the charcter to print
 * Return: 1 if success
 * on error, -1 returned
 */
int _putchar(char c)
{
        return(write(1, &c, 1));
}
