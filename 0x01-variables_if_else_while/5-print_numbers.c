#include <stdio.h>

/**
 * main - prints all single digit numnbers of base 10 starting 
 * 	from zero
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
