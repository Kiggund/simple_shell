#ifndef Shell_h
#define Shell_h

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

#define MAX_ARG 125

int printCommand(void);
int tokenize(char *command, char *argsC[]);
int execMd(char *argsC[]);
char *removeNchar(char *str, int len);

#endif
