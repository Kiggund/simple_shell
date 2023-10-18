#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_ARG 20

int execMd(char *argsC[]);
int tokenize(char *command, char *argsC[]);
int printCommand(void);
char *removeNchar(char *str, int len);

#endif

