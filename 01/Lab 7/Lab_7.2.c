#include <stdio.h>

int main() {
    int i, j, m, n, maxl, maxm;
    int a[20][20];

    printf("m= ");
    scanf("%d", &m);

    printf("n= ");
    scanf("%d", &n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", a[i][j]);

    maxm = a[0][0];
    for (i = 0; i < m; i++) {
        maxl = a[i][0];
        for (j = 1; j < n; j++)
            if (a[i][j] > maxl) maxl = a[i][j];
        if (maxl > maxm) maxm = maxl;
        printf("Maximul pe linia %d este %d", i, maxl);
    }

    printf("Maximul pe matrice este %d", maxm);
    return 0;
}