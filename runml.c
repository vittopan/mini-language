#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LINE_LENGTH 256

void readFile(char* filename) {
    FILE* ml_file = fopen(filename, "r");
    char lines[MAX_LINE_LENGTH];
    int count = 0;
    char identifier[50], expression[200]; //Place to store identifiers, and the expressions.

    if (!ml_file) { // Check if the file exists
        fprintf(stderr, "!Error reading the first line of %s\n", filename);
        return;
    }
    //Used to loop through each file in the line.
    while (fgets(lines, sizeof lines, ml_file) != NULL) {
        printf("%s", lines);  // Print the entire line
        if (strstr(lines, "<-")) {
            // Handle assignment statements
        } else if (strstr(lines, "function")) {
            // Handle function definitions
        } else if (strstr(lines, "print")) {
            // Handle print statements
        }
        count++;
    }

    fclose(ml_file);
}

int main(int argc, char* argv[]) {
    // If there aren't enough arguments, an error message is thrown.
    if (argc != 2) {
        fprintf(stderr, "!There are not enough arguments\n");
        exit(EXIT_FAILURE);
    }
    readFile(argv[argc-1]);

    system("rm -f ml_exec");
    exit(EXIT_SUCCESS);
}