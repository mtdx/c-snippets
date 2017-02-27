#include <stdio.h>

int main() {
    int L1 = 360, L2 = 160, r;

    int a = L1;
    int b = L2;
    r = a % b;
    while (r) {
        a = b;
        b = r;
        r = a % b;
    }

    printf("dimensiuni: %d X %d\n", b, b);
    printf("placi: %d", (L2 / b) * (L1 / b));

    return 0;
}

