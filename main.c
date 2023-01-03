#include <stdio.h>
#include <stdlib.h>
#include "resource_allocation_graph/headers/resource.h"
#include "resource_allocation_graph/headers/process.h"

int main() {
    printf("Hello, World!");

    char usb[] = "Usb";
    char usb_process_name[] = "Usb using process";

    Resource *usb_resource = createResource(usb, 1);
    Process *usb_process = createProcess(usb_process_name);

    printf("My usb resource name is: %s", usb_resource->name);
    printf("\n");
    printf("My usb process name is: %s", usb_process->name);

    free(usb_resource);
    
    return 0;
}
