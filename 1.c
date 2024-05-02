#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("myFile.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.");
        return 1;  
    }
    fprintf(file, "Hello, File Handling!");

    fclose(file);

    printf("The file myFile.txt created and text written successfully...!!\n");

    return 0;
}
