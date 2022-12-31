cmake_minimum_required(VERSION 3.24)
project(OS_concepts)

set(CMAKE_C_STANDARD 11)

add_executable(OS_concepts main.c resource_allocation_graph/vertex.c resource_allocation_graph/headers/vertex.h resource_allocation_graph/resource.c resource_allocation_graph/headers/resource.h)
