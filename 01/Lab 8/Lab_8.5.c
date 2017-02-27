#include <stdio.h>

int nr(int n, int c) {
    int i = 0, aux;
    while (n != 0) {
        aux = n % 10;
        if (aux == c) i++;
        n /= 10;
    }
    return i;
}

int main() {
    int n, k = 0, i;
    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < 9; i++) {
        if (nr(n, i)) k++;
    }

    printf("nr. de cifre distincte %d", k);
}
