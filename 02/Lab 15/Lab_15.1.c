#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin, *fout_poz, *fout_neg;
    int n;

    fin = fopen("nr.txt", "r");
    fout_poz = fopen("nr-poz.txt", "w");
    fout_neg = fopen("nr-neg.txt", "w");

    if (fin == NULL) {
        printf("No file!");
        return 0;
    }
    while (fscanf(fin, "%d", &n) == 1) {
        if (n > 0) fprintf(fout_poz, "%d ", n);
        else if (n < 0) fprintf(fout_neg, "%d ", n);
    }

    fclose(fin);
    fclose(fout_poz);
    fclose(fout_neg);

    return 0;
}