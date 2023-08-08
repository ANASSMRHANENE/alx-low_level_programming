#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *a;
ssize_t b;
ssize_t i;
ssize_t r;
b = open(filename, O_RDONLY);
if (b == -1)
return (0);
a = malloc(sizeof(char) * letters);
r = read(b, a, letters);
i = write(STDOUT_FILENO, a, r);
free(a);
close(b);
return (i);
}

