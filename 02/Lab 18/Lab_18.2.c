# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct {
    double salariu;
    int varsta;
    char nume[30];
} Angajat;

int srtNume(const void *a, const void *b) {
    Angajat x = *(Angajat *) a;
    Angajat y = *(Angajat *) b;
    if (x.salariu < y.salariu)
        return 1;
    else if (x.salariu > y.salariu)
        return -1;
    else return x.varsta - y.varsta;
}


int srtSal(const void *a, const void *b) {
    Angajat x = *(Angajat *) a;
    Angajat y = *(Angajat *) b;
    return strcmp(x.nume, y.nume);
}


int main() {
    int i, k = 0, n;
    FILE *f = fopen("angajat.txt", "r");
    if (f == NULL) {
        printf("Fisier Inexistent");
        return -1;
    }

    fscanf(f, "%d", &n);

    Angajat *ta = (Angajat *) malloc(n * sizeof(Angajat));
    char linie[1001], *p;
    fgetc(f);

    while (fgets(linie, 1001, f) != NULL) {
        p = strtok(linie, " ");
        strcpy(ta[k].nume, p);

        p = strtok(NULL, " ");
        ta[k].varsta = atoi(p);

        p = strtok(NULL, " ");
        ta[k].salariu = atof(p);

        k++;
    }
    fclose(f);

    FILE *fsn = fopen("sn.txt", "w");
    qsort(ta, n, sizeof(Angajat), srtNume);
    for (i = 0; i < n; i++) {
        fprintf(fsn, "%s %d %lf \n", ta[i].nume, ta[i].varsta, ta[i].salariu);
        printf("%s %d %lf \n", ta[i].nume, ta[i].varsta, ta[i].salariu);
    }

    printf("\n\n");

    FILE *fsnv = fopen("angajati_salarii.txt", "w");
    qsort(ta, n, sizeof(Angajat), srtSal);
    for (i = 0; i < n; i++) {
        fprintf(fsnv, "%s %d %lf \n", ta[i].nume, ta[i].varsta, ta[i].salariu);
        printf("%s %d %lf \n", ta[i].nume, ta[i].varsta, ta[i].salariu);
    }

    return 0;
}