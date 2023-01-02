#ifndef OS_CONCEPTS_RESOURCE_H
#define OS_CONCEPTS_RESOURCE_H

typedef struct Resource {
    char *name;
    int amount;
} Resource;

Resource* createResource(const char *name, int amount);

#endif //OS_CONCEPTS_RESOURCE_H
