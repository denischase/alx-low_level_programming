#include "main.h"
#include <stdlib>

/**
* malloc_checked - allocates a memory
* @b: size of bytes allocated
*
* Return: A pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
