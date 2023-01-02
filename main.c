#include <stdio.h>
#include <stdlib.h>
#include "resource_allocation_graph/headers/resource.h"

int main() {
    printf("Hello, World!");

    char usb[] = "Usb";

    Resource *usb_resource = createResource(usb, 1);

    printf("My usb resource name is: %s", usb_resource->name);

    return 0;
}
