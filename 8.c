#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    int lineCount = 0;
    char ch;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the file %s.\n", filename);
        return 1; 
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    fclose(file);

    printf("The lines in the file %s are: %d\n", filename, lineCount);

    return 0;
}
