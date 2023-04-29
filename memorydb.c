#include "shell.h"

/**
 * bfree - releases a reference and NULLifies the address
 * @ptr: the pointer to free's address
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
