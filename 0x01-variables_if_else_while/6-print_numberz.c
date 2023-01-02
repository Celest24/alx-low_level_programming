#include <stdio.h>

/**
 * main- Program that prints out the numbers of base 10 starting from 0 (putchar)
 * Return: value set to 0
 */
int main(void)
{
	int num;

	num = 0;
	do {
		putchar(num + '0');
		num++;
	} while (num <= 9);
	putchar('\n');
	return (0);
}
