#include <stdio.h>
#include <stdlib.h>

void spoz(int v[], int n, int w[], int *m) {
    *m = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] > 0) w[(*m)++] = v[i];
    }
}

int main() {
    int a[100], v[100], n, i, np;

    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    spoz(v, n, a, &np);

    printf("\n");
    for (i = 0; i < np; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }

    return 0;
}