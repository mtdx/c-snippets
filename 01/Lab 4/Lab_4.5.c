#include <stdio.h>

int main() {
    float v[50] = {0};
    int i, n, cresc = 1;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%i] = ", i);
        scanf("%f", &v[i]);
    }

    for (i = 0; i < n; i++) {
        if (i != n - 1 && v[i] > v[i + 1]) cresc = 0;
    }

    if (cresc) printf("Vectorul este crescator.");
    else printf("Vectorul nu este crescator.");

    return 0;
}

