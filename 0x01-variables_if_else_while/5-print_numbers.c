#include <stdio.h>

/**
 * main- Program that prints all single digit numbers of base 10 starting from 0
 * Return: value set to 0
 */
int main(void)
{
	char num;

	num = '0';
	do {
		putchar(num++);
	} while (num <= '9');
	putchar('\n');
	return (0);
}
