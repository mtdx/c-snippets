#include <stdio.h>

int main() {
    int a = 10, b = 1000, p = 2;

    while (p * 2 < a) {
        p *= 2;
    }

    while (p * 2 < b) {
        p *= 2;
        printf("%d\n", p);
    }

    return 0;
}

