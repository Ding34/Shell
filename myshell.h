#ifndef PROG1_MYSHELL_H
#define PROG1_MYSHELL_H

/* 
 * Header file Shell processing
 * This file contains the definitions required for executing commands
 * parsed in main-b.c.
 * Credits: UCLA CS111
 */

#include "cmdline.h"

/* Execute the command list. */
int command_line_exec(command_t *);

#endif
