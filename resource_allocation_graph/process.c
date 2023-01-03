#include "headers/process.h"
#include <stdlib.h>
#include <string.h>

Process* createProcess(const char *name) {
    Process *process = malloc(sizeof(Process));
    process->name = malloc(sizeof(name));
    strcpy(process->name, name);

    return process;
}