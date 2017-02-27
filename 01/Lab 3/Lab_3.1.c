#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("n = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (i - 1) * n;
    }

    printf("Suma: %d", sum);

    return 0;
}

