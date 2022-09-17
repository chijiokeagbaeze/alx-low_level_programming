#include <stdio.h>

/**
 * main - lowercase alphabet reverse mode
 * Return: 0 always (success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
