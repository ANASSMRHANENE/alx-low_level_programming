#include "main.h"
/**
 * append_text_to_file - function
 * @filename: pointer
 * @text_content: string to add
 * Return: If the function fails or filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int r, w, s = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (s = 0; text_content[s];)
s++;
}
r = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, s);
if (r == -1 || w == -1)
return (-1);
close(r);
return (1);
}
