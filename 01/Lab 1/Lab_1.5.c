#include <stdio.h>

int main() {
    unsigned int n;

    printf("n = ");
    scanf("%u", &n);

    if ((n & 1) == 1) {
        printf("Numarul este impar.");
    } else {
        printf("Numarul este par.");
    }

    return 0;
}

