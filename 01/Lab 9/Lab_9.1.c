#include <stdio.h>


int main() {
    int n, ip = 0, i, aux, ip2 = 0;

    printf("n = ");
    scanf("%d", &n);

    while (n > 0) {
        aux = n % 10;
        if (aux % 2 != 0) {
            ip = ip * 10 + aux;
        }
        n /= 10;
    }

    while (ip > 0) {
        aux = ip % 10;
        ip2 = ip2 * 10 + aux;
        ip /= 10;
    }

    printf("%d", ip2);
    return 0;
}