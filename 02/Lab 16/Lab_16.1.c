# include<stdio.h>
# include<stdlib.h>
# include<string.h>

void sort(int v[], int n) {
    int sort, i, aux;
    do {
        sort = 1;
        for (i = 0; i < n - 1; i++)
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                sort = 0;
            }
    } while (sort == 0);
}

int main() {
    FILE *fin, *fout;
    char linie[1001], *p;
    int v[50], k, i;

    fin = fopen("nr.txt", "r");
    fout = fopen("sort.txt", "w");

    while (fgets(linie, 1001, fin) != NULL) {
        int x;
        k = 0;
        p = strtok(linie, " \n");
        while (p != NULL) {
            sscanf(p, "%d", &x);
            v[k++] = x;
            p = strtok(NULL, " \n");
        }
        sort(v, k);
        for (i = 0; i < k; i++)
            fprintf(fout, "%d ", v[i]);
        fprintf(fout, "\n");
    }

    fclose(fin);
    fclose(fout);

    return 0;
}