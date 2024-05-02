#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("myFile.txt", "a");

    if (file == NULL) {
        printf("Error opening the file.");
        return 1;  
    }
    fprintf(file, "\nAppending to the file.");

    fclose(file);

    printf("Text appended to myFile.txt successfully...!!\n");

    return 0;
}
