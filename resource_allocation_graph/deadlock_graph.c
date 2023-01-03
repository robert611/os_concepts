#include "headers/deadlock_graph.h"
#include "headers/resource.h"

Graph* createDeadlockGraph() {
    int graphVertices = 0;
    Graph *graph = malloc(sizeof(Graph));
    graph->numVertices = 0;

    Resource *usbResource = createResource("Usb resource", 1);

    Vertex *usbResourceVertex = createVertex(usbResource, NULL);

    addVertex(graph, usbResourceVertex);

    return graph;
}