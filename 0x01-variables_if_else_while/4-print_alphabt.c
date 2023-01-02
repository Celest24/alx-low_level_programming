#include <stdio.h>

/**
 * main- Entry point - Prints out the alphabet in lower case except 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char letter;

	letter = 'a';
	do {
		if ((letter != 'q') && (letter != 'e'))
			putchar(letter);
		letter++;
	} while (letter <= 'z');
	putchar('\n');
	return (0);
}
