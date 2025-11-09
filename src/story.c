#include "ui.h"
#include "story.h"
#include "utils.h"

#include <stdio.h>
#include <string.h>

void intro(){
    printf("You woke up in the middle of the forest\n");
    printf("As you look around you see 3 paths leading to different parts of the forrest\n");
}

void game_loop(){
    intro();

    char **opt1 = (char **)malloc_2d(3, 15, sizeof(char));

    strcpy(opt1[0], "Dark path");
    strcpy(opt1[1], "Darker path");
    strcpy(opt1[2], "Well lit path");

    int path = 0;
    path = ask_question("Which path will you take?", opt1);
    free_2d((void **)opt1, 3);
    if (path == 1){
        printf("The path is very dark yet you somehow managed to not trip and die \n");
        printf("You found a wooden house!! \n");  
    }
    if (path == 2){
        printf("The path was too dark and you tripped on a rock \n");
        printf("Congratulations you were impaled by a dried out branch! \n");
        
    }
    if (path == 3){
        printf("You walked and walked and walked... \n");
        printf("After all the walking on the WELL LIT path you made it back to the start \n");
        printf("What a surprise \n");
        
    }
}