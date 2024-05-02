#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 100
#define MAX_LINE_LENGTH 100

int main() {
    FILE *file;
    char filename[50];
    char lines[MAX_LINES][MAX_LINE_LENGTH];
    int lineCount = 0;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the file %s.\n", filename);
        return 1;  
    }

    while (fgets(lines[lineCount], MAX_LINE_LENGTH, file) != NULL) {
        lineCount++;
        if (lineCount >= MAX_LINES) {
            printf("Exceeded maximum number of lines supported.\n");
            break;
        }
    }

    fclose(file);

    printf("The content of the file %s are:\n", filename);
    for (int i = 0; i < lineCount; i++) {
        printf("%s", lines[i]);
    }

    return 0;
}
