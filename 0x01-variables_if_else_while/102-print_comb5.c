#include <stdio.h>

/**
 * main- program that prints all possible combinations of two two-digit numbers
 * Return: value set to 0
 */
int main(void)
{
	int num0;
	int num1;

	num0 = 0;
	do {
		num1 = num0 + 1;
		while (num1 <= 99)
		{
			if (num0 || (num1 != 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar((num0 / 10) + '0');
			putchar((num0 % 10) + '0');
			putchar(' ');
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			num1++;
		}
		num0++;
	} while (num0 <= 99);
	putchar('\n');
	return (0);
}
