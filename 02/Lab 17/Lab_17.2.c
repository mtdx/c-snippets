/*
Fsierul produse.txt contine pe prima linie un nr. nat. n, iar pe urmatoarele n linii
informatii despre cate un produs sun forma denumire, cantitate pret.

- sa se scrie in fisierul stock.txt val stocului din fiecare produs, precum si valuarea stocului total
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct {
    char *dem;
    double cant, pu;
} Prod;


int main() {
    char line[100];
    Prod *v;
    char *p;
    int i, n;
    double t;
    FILE *f = fopen("prod.txt", "r");

    fscanf(f, "%d", &n);
    v = (Prod *) malloc(n * sizeof(Prod));


    for (i = 0; i < n; i++) {
        fgets(line, 100, f);
        p = strtok(line, ",\n");
        v[i].dem = (char *) malloc(strlen(p) + 1);
        strcpy(v[i].dem, p);
        p = strtok(NULL, ",\n");
        sscanf(p, "%lf", &v[i].cant);
        p = strtok(NULL, ",\n");
        sscanf(p, "%lf", &v[i].pu);
    }
    fclose(f);

    f = fopen("stock.txt", "w");
    t = 0;
    for (i = 0; i < n; i++) {
        t = t + v[i].cant * v[i].pu;
        fprintf(f, "%s,%.2lf \n", v[i].dem, v[i].cant * v[i].pu);
    }

    fprintf(f, "Stock total: %.2lf", t);
    fclose(f);

    return 0;
}