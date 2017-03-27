#include <stdio.h>
#include <stdlib.h>

int *spoz(int v[], int n, int *m) {
    *m = 0;
    int i, np = 0;
    int *w;

    for (i = 0; i < n; i++)
        if (v[i] > 0) np++;
    w = (int *) malloc(np * sizeof(int));

    for (i = 0; i < n; i++) {
        if (v[i] > 0) w[(*m)++] = v[i];
    }

    return w;
}

int main() {
    int v[100], n, i, np;
    int *a;

    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    a = spoz(v, n, &np);

    printf("\n");
    for (i = 0; i < np; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }

    return 0;
}