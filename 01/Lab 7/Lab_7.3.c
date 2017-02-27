#include <stdio.h>

int main3() {
    int i, j, m, n, sl = 0, sc = 0;
    int a[20][20];

    printf("m= ");
    scanf("%d", &m);

    printf("n= ");
    scanf("%d", &n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sl += a[i][j];
        }
        printf("Suma vanzarilor in magazinul %d este %d", i, sl);
    }

    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            sc += a[j][i];
        }
        printf("Suma vanzarilor din produsul %d este %d", i, sl);
    }

    return 0;
}
