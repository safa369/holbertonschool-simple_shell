#ifndef SIMLPE_SHELL_H
#define SIMPLE_SHELL_H
#define DELIM_LINE " \t\r\n\a"
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
char *read_line();
char **split_line(char *ch_l);
int create_proc(char **args);

#endif