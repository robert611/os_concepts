#ifndef OS_CONCEPTS_PROCESS_H
#define OS_CONCEPTS_PROCESS_H

typedef struct Process {
    char *name;
} Process;

Process* createProcess(const char *name);

#endif //OS_CONCEPTS_PROCESS_H
