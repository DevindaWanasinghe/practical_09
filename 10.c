#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char ch;
    int wordCount = 0, charCount = 0, inWord = 0;

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

        if (ch != ' ' && ch != '\n' && ch != '\t') {
            charCount++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    fclose(file);

    printf("\nThe number of words in the file %s are: %d\n", filename, wordCount);
    printf("The number of characters in the file %s are: %d\n\n", filename, charCount);

    return 0;
}
