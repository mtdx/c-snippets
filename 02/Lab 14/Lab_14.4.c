#include <stdio.h>
#include <stdlib.h>

void spoz(int v[], int n, int **w, int *m) {
    *m = 0;
    int i, np = 0;

    for (i = 0; i < n; i++)
        if (v[i] > 0) np++;
    *w = (int *) malloc(np * sizeof(int));

    for (i = 0; i < n; i++) {
        if (v[i] > 0) (*w)[(*m)++] = v[i];
    }

}

int main() {
    int v[100], n, i, np, *a;

    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    spoz(v, n, &a, &np);

    printf("\n");
    for (i = 0; i < np; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }

    return 0;
}