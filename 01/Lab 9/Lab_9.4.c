#include <stdio.h>

int main() {
    int v[20] = {0}, i, n, min, j;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++) {
        if (v[i] >= 0) {
            min = v[i];
            break;
        }
    }

    if (i == n) {
        printf("Vectorul nu contine elem. pozitive");
    } else {
        for (j = i + 1; j < n; j++) {
            if ((v[j] >= 0) && (v[j] < min)) {
                min = v[j];
            }
        }

        printf("Valoarea minima positiva : %d", min);
    }

    for (i = 0; i < n; i++) {
        if ((v[i] > 100) && (v[i] <= 999))
            printf("%d ", i);
    }

    return 0;
}