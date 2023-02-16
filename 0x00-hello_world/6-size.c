#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
	char;
	int;
	long int;
	long long int;
	float;

	printf("Size of char %lu bytes(s)\n", sizeof(char));
	printf("Size of int %lu bytes(s)\n", sizeof(int));
	printf("Size of long long %lu bytes(s)\n", sizeof(long long int));
	printf("Size of float %lu bytes(s)\n", sizeof(float));
	printf("Size of long int %lu bytes(s)\n", sizeof(long int));

	return (0);
}
