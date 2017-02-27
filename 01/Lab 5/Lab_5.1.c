#include <stdio.h>

int main() {
    int v[50] = {0}, i, n, max;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%i] = ", i);
        scanf("%d", &v[i]);
    }

    max = v[n - 1];
    for (i = n - 2; i >= 0 ; i--) {
        if(v[i] > max) {
            max = v[i];
            printf("%d ", max);
        }
    }
}
