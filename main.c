#include <stdio.h>

<<<<<<< HEAD
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

void main() {
    print_npc("Samo", "JeS!");
}
=======

// jes
void main() {
    printf("wohou!\n");
    
}
>>>>>>> 5156930c145fc76097242ec1ac8e4cd3d5e1136c
