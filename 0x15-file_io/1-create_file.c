#include "main.h"

/**
 * create_file- function
 * @filename: pointer
 * @text_content: pointer
 * Return: If the function fails -1
 */
int create_file(const char *filename, char *text_content)
{
int r, w, s = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (s = 0; text_content[s];)
s++;
}
r = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(r, text_content, s);
if (r == -1 || w == -1)
return (-1);
close(r);
return (1);
}
