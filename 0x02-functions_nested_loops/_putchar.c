#include <unistd.h>
/**
 * main - this function is declared and used
 * for showing letters 
 * Return: 0(SUCCESS)
 */


int _putchar(char c)
{
    return write(1, &c, 1);
}
