#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fin, *fout;
    char line[1001];
    char *w;
    int k, l = 0;

    fin = fopen("text.txt", "r");
    fout = fopen("stats.csv", "w");
    if (fin == NULL) {
        printf("No file!");
        return 0;
    }

    while (fgets(line, 1001, fin) != NULL) {
        k = 0;
        l++;
        w = strtok(line, " ,.\n");
        while (w != NULL) {
            k++;
            w = strtok(NULL, " ,.\n");
        }
        fprintf(fout, "%d, %d \n", l, k);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}