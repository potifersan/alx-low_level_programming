#include "main.h"
#include <uninstd.h>
/**
 * _putchar - writes thr character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 */

int _putchar (char c)
{
	return (write (1, &c, 1));
}
