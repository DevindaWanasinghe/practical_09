#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char ch;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the file %s.\n", filename);
        return 1;  
    }
    printf("The content of the file %s is:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}
