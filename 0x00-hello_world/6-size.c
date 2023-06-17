#include <stdio.h>
/**
  * main - Entry point
  * Return: always 0 (Success)
  */
int main(void)
{
	printf("Size of a char: %lu byteÓ\n", sizeof(char));
	printf("size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
        printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("size of a float: %lu bytes\n", sizeof(float));
	return (0);
}	
