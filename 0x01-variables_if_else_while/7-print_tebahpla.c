#include <stdio.h>

/**
 * main- prints alphabets in reverse order
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
