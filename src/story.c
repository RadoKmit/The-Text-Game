#include <stdio.h>
#include "ui.h"
#include "story.h"

void intro(){
    printf("You woke up in the middle of the forest\n");
    printf("As you look around you see 3 paths leading to different parts of the forrest\n");
}

void game_loop(){
    intro();
    char options1[3][15] = {
        "Dark path",
        "Darker path",
        "Well lit path"
    };

    int path = 0;
    path = ask_question("Which path will you take?", options1);
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