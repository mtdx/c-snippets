#include <stdio.h>

int scif(int x) {
    int s = 0;
    while (x != 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n, i = 0;

    printf("n = ");
    scanf("%d", &n);

    while (n != 0) {
        if (scif(n) == scif(n / 10)) i++;
        n /= 10;
    }

    printf("nr. de zerouri = %d", i);

    return 0;
}