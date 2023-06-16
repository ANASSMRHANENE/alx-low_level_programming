#include <stdio.h>
/**
 *main - this is about showing letters
 *except q e
 *Return: 0(Success)
 */
int main(void)
{
char letter;
for (letter = 'a' ; letter <= 'z' ; letter++)
{
	if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
}
putchar('\n');
return (0);
}
