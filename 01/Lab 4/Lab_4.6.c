#include <stdio.h>

int main() {
    float v[50] = {0};
    int cr = 1, i, n, j;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%i] = ", i);
        scanf("%f", &v[i]);
    }

    for (i = 0; i < n; i++) {
        if (i != n - 1 && v[i] > v[i + 1]) {
            for (j = i; j < n; j++) {
                if (j != n - 1 && v[j] < v[j + 1]) {
                    cr = 0;
                    break;
                } else cr = 1;
            }
            break;
        } else cr = 0;
    }

    if (cr) printf("Vectorul este vector creasta.");
    else printf("Vectorul nu este vector creasta.");

    return 0;
}

