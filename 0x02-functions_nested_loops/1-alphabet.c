#include "main.h"

/**
 * print_alphabet- Prints out the alphabet in lower case
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	do {
		_putchar(alphabet++);
	} while (alphabet <= 'z');
	_putchar('\n');
}
