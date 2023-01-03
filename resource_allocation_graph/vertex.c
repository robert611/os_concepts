#include "headers/vertex.h"

Vertex* createVertex(Resource *resource, Process *process) {
    Vertex *vertex = malloc(sizeof(Vertex));
    vertex->resource = resource;
    vertex->process = process;
    vertex->visited = 0;
    vertex->next = NULL;

    return vertex;
}

Graph* createGraph() {
    Graph *graph = malloc(sizeof(Graph));
    graph->numVertices = 0;
    for (int i = 0; i < MAX_VERTICES; i++) {
        graph->vertices[i] = NULL;
    }

    return graph;
}

void addVertex(Graph *graph, Vertex *vertex) {
    graph->vertices[graph->numVertices++] = vertex;
}

void addEdge(Vertex *u, Vertex *v) {
    u->next = v;
}
