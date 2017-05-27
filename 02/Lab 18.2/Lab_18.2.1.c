# include <stdio.h>
# include <stdlib.h>


int **mat(int n) {
    int **a, i, j;
    a = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        a[i] = (int *) malloc(n * sizeof(int));
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = i < j ? i : j;
        }
    }
    return a;
}

int main() {
    int i, j, n, **a;
    printf("n = ");
    scanf("%d", &n);

    a = mat(n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
        free(a[i]);
    free(a);

    return 0;
}