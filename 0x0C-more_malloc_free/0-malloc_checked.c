<<<<<<< HEAD
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 *@b: string we need to duplicate
 * Return: a pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
>>>>>>> 38f4ca88d1309809bad6a553730ccf64e8e5a248
