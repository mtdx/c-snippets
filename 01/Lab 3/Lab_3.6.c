#include <stdio.h>

int main() {
    int a1, a2, a3, max_a;
    int b1, b2, b3, min_b;

    printf("a1 = ");
    scanf("%d", &a1);
    printf("a2 = ");
    scanf("%d", &a2);
    printf("a3 = ");
    scanf("%d", &a3);

    printf("b1 = ");
    scanf("%d", &b1);
    printf("b2 = ");
    scanf("%d", &b2);
    printf("b3 = ");
    scanf("%d", &b3);

    max_a = a1;
    if (a2 > max_a) max_a = a2;
    if (a3 > max_a) max_a = a3;

    min_b = b1;
    if (b2 > min_b) min_b = b2;
    if (b3 > min_b) min_b = b3;

    if (max_a == min_b) printf("Ora: %d", max_a);
    else printf("Intervalul: %d - %d", max_a, min_b);

    return 0;
}

