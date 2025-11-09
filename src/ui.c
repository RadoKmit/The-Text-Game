#include "ui.h"
#include "utils.h"

#include <stdio.h>

void print_npc(char *name, char *msg){
    print_buffer(name);
    printf(": ");
    print_buffer(msg);
    printf("\n");
}

int ask_question(char *question, char **options){
    print_buffer(question);
    printf("\n");
    int option = 0;
    for(int i=0; i < 3; i++){
        printf("%d.", i+1);
        print_buffer(options[i]);
        printf("\n");
    }

    while(option <= 0 || option >= 4){
        printf("Choice: ");
        scanf("%d", &option);
    }

    return option;
}
