#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LINE_LENGTH 256

typedef struct{
    calls functions;
    calls commands;


} calls;


char* readFile(char* filename){

    FILE* file;
    file = fopen(filename, "r");
    char* lines[MAX_LINES][MAX_LINE_LENGTH];
    int count = 0;
    if (!file){
        fprintf(stderr, "!Error reading the first line of %s\n");
        return;
    }
    while(fgets(lines, sizeof lines, file) != NULL){
        if(strstr(lines[count], "function")){
            
        }

    }


    


}





int main(int argc, char* argv[]){
    //If there aren't enough arguments, an error message is thrown.
    if (argc != 2){
        fprintf(stderr, "!There are not enough arguments\n");
        exit(EXIT_FAILURE);
    }


    system("rm -f ml_exec");
    exit(EXIT_SUCCESS);
}



