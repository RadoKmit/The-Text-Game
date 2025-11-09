#ifndef UTILS_H
#define UTILS_H

#include <stdlib.h>

void print_buffer(char *buffer);

void **malloc_2d(int rows, int cols, size_t elem_size);

void free_2d(void **array, int rows);

#endif
