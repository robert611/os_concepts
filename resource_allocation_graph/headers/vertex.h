#ifndef OS_CONCEPTS_VERTEX_H
#define OS_CONCEPTS_VERTEX_H

#include <stdio.h>
#include <stdlib.h>
#include "resource.h"
#include "process.h"

#define MAX_VERTICES 100

// Structure to represent a vertex in the graph
typedef struct Vertex {
    Resource *resource;
    Process *process;
    int visited;
    struct Vertex *next; // Pointer to the next vertex in the linked list
} Vertex;

// Structure to represent a graph
typedef struct Graph {
    Vertex *vertices[MAX_VERTICES]; // Array of pointers to vertices
    int numVertices;
} Graph;

Vertex* createVertex(Resource *resource, Process *process);

Graph* createGraph();

void addVertex(Graph *g, Vertex *v);

void addEdge(Vertex *u, Vertex *v);

#endif //OS_CONCEPTS_VERTEX_H
