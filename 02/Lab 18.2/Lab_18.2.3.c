
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct {
    char nume[50];
    int note[20];
    int nr_note;
    float media;
    int grupa;

} Student;

void calculmedia(Student t[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        t[i].media = 0;
        for (j = 0; j < t[i].nr_note; j++) {
            t[i].media += t[i].note[j];
        }
        t[i].media /= t[i].nr_note;
    }
}

int cmpStudenti(const void *a, const void *b) {
    Student va = *(Student *) a;
    Student vb = *(Student *) b;

    if (va.media > vb.media) return -1;
    if (va.media < vb.media) return 1;
    return strcmp(va.nume, vb.nume);
}

void grupa(Student t[], int n, int g) {
    FILE *f;
    int i;
    char nfis[20];
    sprintf(nfis, "grupa_%d.bin", g);
    f = fopen(nfis, "wb");

    for (i = 0; i < n; i++) {
        if (t[i].grupa == g)
            fwrite(&t[i], sizeof(Student), 1, f);
    }
    fclose(f);
}

int main() {

    qsort(t, n, sizeof(Student), cmpStudenti);

}