#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the pointer
 *
 * Return: (0)
 */
int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\0')
	{
	total_len++;
	}

	return (total_len);
}
