#include <stdio.h>

int main1() {
    int i, j, m, n;
    int a[20][20];

    printf("m= ");
    scanf("%d", &m);

    printf("n= ");
    scanf("%d", &n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", a[i][j]);

    for (i = 0; i < m; i++) {
        if (i % 2 == 0)
            for (j = 0; j < n; j++)
                printf("%d ", a[i][j]);
        else
            for (j = n - 1; j >= 0; j--)
                printf("%d ", a[i][j]);
    }

    return 0;
}