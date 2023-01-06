#include "simple_shell.h"
/**
 * create_proc - function that create a process.
 * @args: the arguments.
 * Return: 1.
*/
int create_proc(char **args)
{
pid_t pid;
int status;

pid = fork();
if (pid == 0)
{
if (execvp(args[0], args) == -1)
{
perror("ERROR fork");
}
return (-1);
}
else if (pid < 0)
{
perror("Error to execute");
}
else{
waitpid(pid, &status, WUNTRACED);
}
return (1);
}
