#include <stdio.h>

int sumad(int n) {
    int s, d;
    s = n + 1;

    for (d = 2; d <= n / 2; d++)
        if (n % d == 0) s = s + d;

    return s;
}


int main() {
    int i, a, b;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("Nr. prime cuprinse intre %d si %d : \n", a, b);
    for (i = a; i <= b; i++)
        if (sumad(i) == i + 1)
            printf("%d ", i);

    return 0;
}