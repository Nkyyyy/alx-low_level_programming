#include <stdio.h>
/**
 * main - print all lower case aphabets except q and e
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
		putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}