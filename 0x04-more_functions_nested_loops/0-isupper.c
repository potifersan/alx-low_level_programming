#include "main.h"

/**
 * Isupper - A function that checks for uppercase character.
 * c: An Input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int (c))
{
	char uppercase = 'A';

	int isupper = 0;

       	for (; uppercase <= 'z'; uppercase++)
	{
	if (c == uppercase)
	{

	isupper = 1;
	break;
	}
	}
	return (isupper);
}
