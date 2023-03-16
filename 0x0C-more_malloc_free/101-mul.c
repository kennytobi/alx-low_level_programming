#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * print_error - print error and exist with a status of 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * is_valid_number - checks if a string is a valid number
 * @str: the string to check
 * Return: 1 if the string is a valid number 0 otherwise
 */
int is_valid_number(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * multiply - multiplies two postive number
 * @num1: the first number
 * @num2: the second number
 */
void multiply(char *num1, char *num2)
{
	int i, j, len1, len2, sum, product, *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	result = calloc(len1 + len2, sizeof(int));
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			sum = result[i + j + 1] + product;
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
	{
		i++;
	}
	if (i == len1 + len2)
	{
		printf("0\n");
		free(result);
		return;
	}
	for (; i < len1 + len2; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	free(result);
}
/**
 * main - Entry point
 * @argc: the number of command line argument
 * @argv: an array containing the command line argument
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2;

	if (argc != 3)
	{
		print_error();
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		print_error();
	}
	multiply(num1, num2);
	return (0);
}
