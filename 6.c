#include <stdio.h>

int main() {
    FILE *file;
    int numLines, i;
    char line[100];

    printf("Input the number of lines to be written: ");
    scanf("%d", &numLines);

    file = fopen("test.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.");
        return 1;  
    }

    printf(":: The lines are ::\n");
    for (i = 0; i < numLines; i++) {
        printf("Enter line %d: ", i + 1);
        scanf(" %[^\n]", line);
        fprintf(file, "%s\n", line);
    }
    fclose(file);

    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Error opening the file for reading.");
        return 1;  
    }

    printf("The content of the file test.txt is:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    fclose(file);

    return 0;
}
