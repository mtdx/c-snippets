#include <stdio.h>
#include <math.h>

int prim(int n) {
    for (int i = 2; i <= (int) sqrt(n); i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int main() {
    int i, n, nr[20] = {0}, s = 0;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &nr[i]);
    }

    //
    for (i = 0; i < n; i++) {
        if (nr[i] && prim(nr[i])) s += nr[i];
    }

    printf("suma = %d", s);
}