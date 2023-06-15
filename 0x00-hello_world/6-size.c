#include <stdio.h>
/**
 * main - this programme is about shoing the size
 * of various things
 * Return: 0(Success)
 */
int main (void)
{
	printf ("size of a char is: %zu",sizeof(char));
	printf ("size of an int is: %zu",sizeof(int));
	printf ("size of a  long int is: %zu",sizeof( long int));
	printf ("size of a long long int is: %zu",sizeof(long long int));
	printf ("size of a float is: %zu",sizeof(float));
return (0);
}
