#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fin;
    char line[1001];

    fin = fopen("text.txt", "r");
    if (fin == NULL) {
        printf("No file!");
        return 0;
    }

    while (fgets(line, 1001, fin) != NULL) {
        if (strlen(line) > 1) {
            printf("%s", line);
        }
    }

    fclose(fin);

    return 0;
}