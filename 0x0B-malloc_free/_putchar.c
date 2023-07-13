#include <unistd.h>
#include "main.h"
/**
 * _putchar - is a function use the write function
 * to write a one charctar
 * @c: parametar storge the value who 
 * the write function will write
 * Return: 1 if success 
 * and -1 returnd if failed
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
