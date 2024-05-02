#include <stdio.h>

int main() {
    FILE *file;
    char sentence[100];

    printf("Input a sentence for the file: ");
    fgets(sentence, sizeof(sentence), stdin);

    file = fopen("test.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.");
        return 1;  
    }
    fprintf(file, "%s", sentence);

    fclose(file);

    printf("The file test.txt created successfully...!!\n");

    return 0;
}
