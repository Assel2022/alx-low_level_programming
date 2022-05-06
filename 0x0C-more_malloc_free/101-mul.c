#include "main.h"

/**
 * main - Program that mulplies two positive numbers
 * @argc: Number of argumenets
 * @argv: Muldimensional array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char b[15000];
	char *n = b;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		putchar('0');
		putchar(10);
		return (0);
	}

	n = big_mult(argv[1], argv[2]);

	for (i = 0, j = 0;; i++)
	{
		if (n[i] != '0')
			j = 1;
		if (j == 1 && n[i] == '\0')
			break;
		if (j == 1)
			putchar(n[i]);
	}
	putchar(10);

	return (0);
}

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: Elements of array
 * @size: Size of data type
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}

/**
 * _strlen - Function that calculates the length of a string
 * @s: String to be checked
 * Return: The lengtht of string or -1 if it fails
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
		return (-1);

	for (i = 0; s[i]; i++)
		;

	return (i);
}

/**
 * big_mult - Function that multiplies two big numbers
 * @s1: String big number 1
 * @s2: String big number 2
 * Return: a result of the two big numbers
 */
char *big_mult(char *s1, char *s2)
{
	int i, j, k, l, value;
	char *n;

	i = _strlen(s1);
	j = _strlen(s2);
	k = i + j + 1;
	n = _calloc(k, sizeof(char));
	if (n == NULL)
		printf("Error\n"), exit(98);
	n[k - 1] = '\0';

	for (--i; i >= 0; i--)
	{
		if (s1[i] < '0' || s1[i] > '9')
			free(n), printf("Error\n"), exit(98);
		for (l = j - 1; l >= 0; l--)
		{
			if (s2[l] < '0' || s2[l] > '9')
				free(n), printf("Error\n"), exit(98);
			value = (s1[i] - '0') * (s2[l] - '0');
			n[i + l + 1] += value;
			if (n[i + l + 1] > 9)
			{
				value = n[i + l + 1];
				n[i + l + 1] %= 10;
				n[i + l] += value / 10;
			}
		}
	}

	for (i = 0; i < k - 1; i++)
		n[i] += '0';

	return (n);
}
