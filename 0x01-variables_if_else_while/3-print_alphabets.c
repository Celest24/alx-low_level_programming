#include <stdio.h>

/**
 * main- Entry point. Prints the alphabet in lower case alternating with upper case
 * Return: value set to 0
 */
int main(void)
{
	char letter;

	letter = 'a';
	do {
		putchar(letter++);
		if (letter == ('z' + 1))
			letter = 'A';
	} while (letter != ('Z' + 1));
	putchar('\n');
	return (0);
}
