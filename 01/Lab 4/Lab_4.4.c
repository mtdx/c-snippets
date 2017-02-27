#include <stdio.h>

int main() {
    int n, i, aux;

    printf("n = ");
    scanf("%d", &n);
    aux = n;
    char v[n];
    for (i = 0; i < n; i++) v[i] = 0;

    while (n != 0) {
        v[n % 10]++;
        n /= 10;
    }

    for (i = 0; i < aux; i++) {
        if (v[i]) printf("frecventa %d: %d\n", i, v[i]);
    }

    return 0;
}

