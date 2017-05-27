# include <stdio.h>
# include <string.h>


int main() {
    FILE *fin, *fout;
    int n, c = 0;
    char linie[1001], *p;

    fin = fopen("cuvinte.in", "r");
    fout = fopen("cuvinte.out", "w");

    fscanf(fin, "%d", &n);
    fgetc(fin);

    while (fgets(linie, 1001, fin) != NULL) {
        p = strtok(linie, " .,;:!?\n");
        while (p != NULL) {
            if (strlen(p) == n) {
                fprintf(fout, "%s\n", p);
                c++;
            }
            p = strtok(NULL, " .,;:!?\n");
        }
    }

    if (c == 0)
        fprintf(fout, "%s", "Imposibil");

    fclose(fin);
    fclose(fout);

    return 0;
}