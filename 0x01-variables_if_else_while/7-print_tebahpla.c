#include <stdio.h>

/**
 * main- Entry point - Prints lower case letters of the alphabet in reverse
 * Return: value set to 0
 */
int main(void)
{
	char l_case;

	l_case = 'z';
	do {
		putchar(l_case--);
	} while (l_case >= 'a');
	putchar('\n');
	return (0);
}
