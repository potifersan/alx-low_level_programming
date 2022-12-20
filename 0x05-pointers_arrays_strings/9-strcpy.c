nclude "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: Destination value
 * @src: Source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int m;
l
	for (m = 0; src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	dest[m++] = '\0';

	return (dest);
}
