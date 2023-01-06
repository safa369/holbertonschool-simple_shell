#include "simple_shell.h"
/**
 * split_line - function that parse line into a list of program.
 * @ch_l: line of arguments adds by user.
 * Return: a array of characters pointers.
*/
char **split_line(char *ch_l)
{
    int buf_size = 64, pos = 0;
    char **tokens = malloc(buf_size * sizeof(char *));
    char *token;
    if (!tokens)
    {
        fprintf(stderr, "Allocation error\n");
        exit (EXIT_FAILURE);
    }
    token = strtok(ch_l, DELIM_LINE);
    while (token != NULL)
    {
    tokens[pos] = token;
    pos++;
    if (pos >= buf_size)
    {
        buf_size+= buf_size;
        tokens = realloc(tokens, buf_size * sizeof(char *));
        if (!tokens)
        {
            fprintf(stderr, "Allocation error");
            exit (EXIT_FAILURE);
        }
    }
token = strtok(NULL, DELIM_LINE);
    }
tokens[pos] = NULL;
return (tokens);
}
