#include <stdio.h>
/**
 * main - asks user for two numbers and a calculating symbol and do the math for them
 * Return: 0
 */

int main()
{
	float number;
	float number2;
	char symbol;
	float calc;

	printf("Choose a calculation method from below(You must enter a symbol, + for example): \n");
	printf("1. -\n2. +\n3. /\n4. *\n");
	scanf("%c", &symbol);
	if (symbol != '-' || symbol != '+' || symbol != '/' || symbol != '*')
	{
		printf("Invalid symbol\n");
		return (2);
	}
	else
	{
		printf("Enter the first number: ");
		scanf("%f", &number);
		printf("Enter the second number: ");
		scanf("%f", &number2);
		if (symbol == '-')
		{
			calc = number - number2;
		}
		else if (symbol == '+')
		{
			calc = number + number2;
		}
		else if (symbol == '/')
		{
			calc = number / number2;
		}
		else
		{
			calc = number * number2;
		}
		printf("Result: %.2f\n", calc);

		return (0);
	}
}
