#include "simple_shell.h"
/**
 * read_line - function that get line of arguments.
 * Return: line of arguments
*/
char *read_line()
{
char *line = NULL;
ssize_t *bufsize = 0;

if (getline(&line, &bufsize, stdin) == -1)
{
if(feof(stdin))
EXIT_SUCCESS;
else
{
perror("error read line\n");
exit (EXIT_FAILURE);
}
}
return (line);
}
