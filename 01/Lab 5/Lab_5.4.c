
#include <stdio.h>

int main() {
    int i, v[10], n, aux, d, f[100] = {0};
    printf("n= ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    for (i = 0; i < n; i++) {
        aux = v[i];
        while (aux >= 10) {
            d = aux % 100;
            if (d >= 10) f[d]++;
            aux /= 10;
        }
    }

    for (i = 0; i < 100; i++)
        if (f[i] != 0) printf("f[%d] = %d \n", i, f[i]);

    return 0;
}