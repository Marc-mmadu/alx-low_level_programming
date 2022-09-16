#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a newline
 *but for multiples of three prints Fizz instead of the number
 *and for the multiples of the five prints Buzz
 * Return: Always 0n (Success)
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
