#include <stdio.h>

int cmax(int x) {
    int max = x % 10, aux;
    while (x != 0) {
        aux = x % 10;
        if (aux > max) max = aux;
        x /= 10;
    }
    return max;
}

int main() {
    int n, i, v[20];

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++) {
        printf("Cea mai mare cifra %d = %d \n", v[i], cmax(v[i]));
    }
}