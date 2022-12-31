#include "headers/vertex.h"

Vertex* createVertex(int value) {
    Vertex *vertex = malloc(sizeof(Vertex));
    vertex->value;
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
