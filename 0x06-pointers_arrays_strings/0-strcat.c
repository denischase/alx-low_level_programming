#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, + the terminating
 *	null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int len = 0, i = 0;

	while (dest[i++])
		len++;

	for (; src[i]; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}