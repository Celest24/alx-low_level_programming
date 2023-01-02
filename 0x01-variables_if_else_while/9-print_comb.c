#include <stdio.h>

/**
 * main- Program that prints all possible combinations of single-digit numbers.
 * Return: value set to 0
 */
int main(void)
{
	int num;

	num = 0;
	do {
		if (num)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(num + '0');
		num++;
	} while (num <= 9);
	putchar('\n');
	return (0);
}
