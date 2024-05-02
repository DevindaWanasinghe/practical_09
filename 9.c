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

    printf("The content of the file %s are:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
        if (ch == '\n') {
            lineCount++;
        }
    }
    fclose(file);

    printf("\nThe lines in the file are: %d\n", lineCount);

    return 0;
}
