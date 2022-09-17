#include <stdio.h>

/**
 * main - prints all base 10 single digit numbers starting from 0
 * Return: 0 Always
 *
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
