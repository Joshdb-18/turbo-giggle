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

	printf("Choose a calculation method from below: \n");
	printf("-\n+\n/\n*\n");
	scanf("%c", &symbol);
	printf("Enter the first number: ");
	scanf("%f", &number);
	printf("Enter the second number: ");
	scanf("%f", &number2);
	if (symbol == '-')
	{
		calc = number - number2;
	}
	else if (symbool == '+')
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
	printf("%.2f\n", calc);

	return (0);
}
