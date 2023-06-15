#include <stdio.h>
/**
 * main - this programme is about shoing the size
 * of various things
 * Return: 0(Success)
 */
int main(void)
{
printf("size of a char is: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("size of an int is: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("size of a  long int is: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("size of a float is: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
