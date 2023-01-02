#include <stdio.h>

/**
 * main- Prints out the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char l_case;

	l_case = 'a';
	do {
		putchar(l_case++);
	} while (l_case <= 'z');
	putchar('\n');
	return (0);
}
