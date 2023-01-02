#include <stdio.h>

/**
 * main- program that prints all the numbers of base 16 in lowercase
 * Return: value set to 0
 */
int main(void)
{
	char num;

	num = '0';
	do {
		putchar(num++);
		if (num == ('9' + 1))
			num = 'a';
	} while (num != 'g');
	putchar('\n');
	return (0);
}
