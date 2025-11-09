#include <stdio.h>

#include "ui.h"


int main() {

    char buffers[3][15] = {
        "Hello",
        "World",
        "C language"
    };
    int option = ask_question("Question", buffers);
    printf("%d\n", option);
}
