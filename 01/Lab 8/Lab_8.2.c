#include <stdio.h>
#include <math.h>
#include <limits.h>

int prim(int n) {
    for (int i = 2; i <= (int) sqrt(n); i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int main() {
    int i, n, prim1, prim2, a;

    printf("n = ");
    scanf("%d", &n);

    for (i = n + 1; i <= INT_MAX; i++) {
        if (prim(i)) {
            prim1 = i;
            break;
        }
    }

    for (i = n - 1; i > 1; i--) {
        if (prim(i)) {
            prim2 = i;
            break;
        };
    }

    a = prim1 - n < prim2 - n ? prim1 : prim2;
    printf("cel mai apropiat prim nr. = %d", a);
}