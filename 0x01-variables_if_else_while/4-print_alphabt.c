#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Description: except for q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
