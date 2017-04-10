# include<stdio.h>
# include<stdlib.h>
# include<string.h>


int main() {
    FILE *fin, *fout;
    char linie[1001], *p;
    int min, max, k;

    fin = fopen("nr.txt", "r");
    fout = fopen("minmax.txt", "w");

    while (fgets(linie, 1001, fin) != NULL) {
        p = strtok(linie, " \n");
        sscanf(p, "%d", &min);
        sscanf(p, "%d", &max);
        while (p != NULL) {
            sscanf(p, "%d", &k);
            if (k > max) max = k;
            else if (k < min) min = k;
            p = strtok(NULL, " \n");
        }

        fprintf(fout, "%d ", min);
        fprintf(fout, "%d ", max);
        fprintf(fout, "\n");
    }

    fclose(fin);
    fclose(fout);

    return 0;
}