#include <stdio.h>

/**
 * main - First 50 numbers in a fibonacci sequence from 1 and 2
 *
 * Return: 50 fibonacci numbers
 */

int main(void)
{
	int i, n, num1 = 0, num2 = 1, next_num = num1 + num2;

	printf("%d, %d, ", num1, num2);

	for (i = 3; i <= 50; ++i){
		printf("%d, ", next_num);
		num1 = num2;
		num2 = next_num;
		next_num = num1 + num2;
	}
	return (0);
}
