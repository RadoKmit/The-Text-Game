#include "utils.h"

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void print_buffer(char *buffer){
    char *ptr = buffer;
    while(*ptr != '\0')
        printf("%c", *ptr++);
}

void **malloc_2d(int rows, int cols, size_t elem_size){
    void **array = malloc(rows * sizeof(void *));
    if(!array){
        perror("Malloc failed (rows)");
        exit(1);
    }

    for(int i=0; i<rows; i++){
        array[i] = malloc(cols * elem_size);
        if(!array[i]){
            perror("malloc failed (cols)");
            for(int j=0; j<i; j++)
                free(array[j]);
            exit(1);
        }
    }

    return array;
}

void free_2d(void **ptr, int rows){
    if(!ptr) return;

    void **array = ptr;
    for(int i=0; i<rows; i++)
        free(array[i]);
    free(array);
}
