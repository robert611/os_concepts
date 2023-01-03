#include "headers/resource.h"
#include <stdlib.h>
#include <string.h>

// char here means that pointer points to variable of type char
Resource* createResource(const char *name, int amount) {
    Resource *resource = malloc(sizeof(Resource));
    resource->name = malloc(sizeof(name));
    strcpy(resource->name, name);
    resource->amount = amount;

    return resource;
}