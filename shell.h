#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/wait.h>
#include <limits.h>
#include <string.h>

#define MAX_ARG 20

int execMd(char *argsC[]);
int printCommand(void);
char *removeNchar(char *str, int len);
int tokenize(char *command, char *argsC[]);

#endif
