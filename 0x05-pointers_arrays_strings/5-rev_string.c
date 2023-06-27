#include "main.h"
#include <stdio.h>
/**
 * rev_string - function
 * @s: parametre
 * Return: 0(SUCCESS)
 */
void rev_string(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
for (i- = 1; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
