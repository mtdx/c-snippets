/*
fisierul p.txt contine pe prima linie un nr. nat. n, iar pe urmatoarele n linii,
cate o pereche de nr. reale, reprezentand coord. unit pct. in plan.

Sa se afiseze pe ecran distanta maxima intre 2 pct.
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

typedef struct {
    double x, y;
} Punct2D;

double dist(Punct2D p, Punct2D q) {
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

int main() {
    Punct2D *v, p1, p2;
    double dmax, d;
    int i, j, n;
    FILE *f = fopen("p", "r");

    fscanf(f, "%d", &n);
    v = (Punct2D *) malloc(n * sizeof(Punct2D));

    for (i = 0; i < n; i++)
        fscanf(f, "%lf %lf", &v[i].x, &v[i].y);
    fclose(f);

    dmax = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            d = dist(v[i], v[j]);
            if (d > dmax) {
                dmax = d;
                p1 = v[i];
                p2 = v[j];
            }
        }
    }

    printf("D. max : %.3lf \n", dmax);
    printf("P1 : %.2lf %.2lf \n", p1.x, p1.y);
    printf("P2 : %.2lf %.2lf \n", p2.x, p2.y);

    return 0;
}