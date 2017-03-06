#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, j;
    int **a;
    int **b;

    printf("n = ");
    scanf("%d", &n);

    a = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        a[i] = (int *) malloc(n * sizeof(int));
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("v[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    b = (int **) malloc((n - 1) * sizeof(int *));
    for (i = 0; i < n; i++) {
        b[i] = (int *) malloc((n - 1) * sizeof(int));
        for (j = 0; j < n; j++) {
            if (i == j) continue;
            b[i][j] = a[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < n; i++) {
        free(a[i]);
        if (i != n - 1) free(b[i]);
    }

    free(a);
    free(b);

    return 0;
}
