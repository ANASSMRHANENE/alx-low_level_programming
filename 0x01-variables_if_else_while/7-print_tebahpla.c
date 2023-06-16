#include <stdio.h>
/**
 * main - this project is about
 * showing letters alphabets in reverse
 * Return: 0(Success)
 */
int main(void)
{
char letter;
for (letter = 'z' ; letter >= 'a' ; letter--)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
