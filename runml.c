#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
    //If there aren't enough arguments, an error message is thrown.
    if (argc != 2){
        fprintf(stderr, "There are not enough arguments");
        exit(EXIT_FAILURE);
    }



    exit(EXIT_SUCCESS);
}



