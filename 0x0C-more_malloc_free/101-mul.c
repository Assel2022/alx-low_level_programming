#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate (`size' * `nmemb') bytes and set to 0
 * @nmemb: number of elements
 * @size: number of bytes per element
 *
 * Return: pointer to memory, or NULL if `nmemb' or `size' is 0 or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; ++i)
		p[i] = 0;
	return (p);
}

/**
 * _strdigit - check if string `s' is composed only of digits
 * @s: string to check
 *
 * Return: 1 if true, 0 if false
 */
int _strdigit(char *s)
{
	if (*s == '-' || *s == '+')
		++s;
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		++s;
	}
	return (1);
}

/**
 * _puts - print string `s'
 * @s: string to print
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*(s++));
}


