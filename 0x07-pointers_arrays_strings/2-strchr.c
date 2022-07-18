#include "main.h"

/**
 * _strchr -> string character
 * @s: string given
 * @c: another char
 * Return: a string
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{

		if (c == *s)

			return (s);
			s++;
	}
	if (c == *s)

		return (s);
	return (NULL);
}
