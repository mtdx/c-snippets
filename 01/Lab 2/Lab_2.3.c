#include <stdio.h>

int main() {
    int a, b, p;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    p = a;
    for (int i = 1; i < b; i++) {
        p *= a;
    }

    printf("a^b = %d", p);

    return 0;
}

