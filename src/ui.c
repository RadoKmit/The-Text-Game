#include "ui.h"

#include <stdio.h>

void print_buffer(char *buffer){
    char *ptr = buffer;
    while(*ptr != '\0')
        printf("%c", *ptr++);
}

void print_npc(char *name, char *msg){
    print_buffer(name);
    printf(": ");
    print_buffer(msg);
    printf("\n");
}