#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ARG 15

int execMd(char *argsC[]);
int printCommand(void);
char *removeNchar(char *str, int len);
int tokenize(char *command, char *argsC[]);
bool space(char *sre);
int _isspace(int cha);

#endif

