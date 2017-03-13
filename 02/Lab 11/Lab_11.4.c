#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, j;
    int **a;

    printf("n = ");
    scanf("%d", &n);

    a = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        a[i] = (int *) malloc(i + 1 * sizeof(int));
    }
    for (i = 0; i < n; i++) {
        a[i][0] = n - i;
        a[n - 1][i] = i + 1;
    }

    for (i = n - 2; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            a[i][j] = a[i][j - 1] + a[i + 1][j];
        }
    }

    printf(" ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n ");
    }

    for (i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}