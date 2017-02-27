#include <stdio.h>

int main() {
    int v[20] = {0}, i, j, s, k, n, fr[20] = {0}, min, aux;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++) {
        if (v[i] > 0) {
            s = s + v[i];
            k++;
        }
    }

    if (s == 0) printf("0");
    else {
        printf("Media: %0.2f\n", (float) s / k);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; i < n; i++) {
            if (v[j] > v[i]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    min = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] < min) min = v[i];
    }

    for (i = 0; i < n; i++) {
        if (v[i] > 0) fr[v[i] - min]++;
    }

    printf("Valori Distincte: \n");
    for (i = 0; i < 20; i++) {
        if (fr[i] == 1) printf("%d ", i + min);
    }

}