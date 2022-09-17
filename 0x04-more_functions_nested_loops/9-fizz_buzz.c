#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line
 * but for multiples of threee prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (success)
 */

int main(void)
{
	int p = 100;
	int i;

	i = 1;
	while (i <= p)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		
		else if  (i % 5 == 0)
		{
			if (i < p)
				printf("Buzz");
		}

		else
		{
			printf("%d ", i);
		}
	       
		i++;


	}	
	printf("\n");
	return (0);
}
