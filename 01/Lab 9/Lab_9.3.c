
#include <stdio.h>

int main() {
    int n, v[20][20] = {{0}}, i, maxl, j, v2[20] = {0}, aux;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("v[%d][%d] ", i, j);
            scanf("%d", &v[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        maxl = v[i][0];
        for (j = 0; j < n; j++) {
            if (v[i][j] > maxl) maxl = v[i][j];
        }

        if (maxl < 0) maxl = -1;
        printf("Cel mai mare nr pozitiv pe linia %d este: %d \n", i, maxl);
    }

    for (i = 0; i < n; i++) {
        v2[i] = v[i][i];
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (v2[j] > v2[i]) {
                aux = v2[i];
                v2[i] = v2[j];
                v2[j] = aux;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d \n", v2[i]);
    }
    return 0;

}