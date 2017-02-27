#include <stdio.h>

int main() {
    int v[50] = {0}, i, j, n, d[50] = {0}, m;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%i] = ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (v[i] == v[j]) break;
            if (i == j) {
                d[i]++;
            }
        }
    }

    printf("Valori Distincte Frecventa:");
    for (i = 0; i < n; i++) {
        if (d[i]) printf("v[%d]: %d \n", v[i], d[i]);
    }
}
