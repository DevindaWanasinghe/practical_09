#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("myFile.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.");
        return 1;  
    }
    printf("Contents of myFile.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);

    return 0;
}
