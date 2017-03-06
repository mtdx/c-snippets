#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, j;
    int **v;

    printf("n = ");
    scanf("%d", &n);

    v = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        v[i] = (int *) malloc((i + 1) * sizeof(int));
        for (j = 0; j < i + 1; j++) {
            v[i][j] = j + 1;
        }
    }

    printf(" ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n ");
    }

    printf("\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("v[%d][%d] = %d \n", i, j, v[i][j]);
        }
    }


    for (i = 0; i < n; i++) {
        free(v[i]);
    }
    free(v);

    return 0;
}