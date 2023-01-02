#include "headers/resource.h"
#include <stdlib.h>
#include <string.h>

Resource* createResource(const char *name, int amount) {
    Resource *resource = malloc(sizeof(Resource));
    resource->name = malloc(sizeof(name));
    strcpy(resource->name, name);
    resource->amount = amount;

    return resource;
}