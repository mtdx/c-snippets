#include <stdio.h>

int main() {
    int x, y;

    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%d", &y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x = %d \n", x);
    printf("y = %d \n", y);

    return 0;
}

