#include <stdio.h>

int main() {
    int s = 50, s2 = 0, l, d = 0;


    do {
        printf("Lei: ");
        scanf("%d", &l);
        s2 += l;
        d++;
    } while (s2 < s);


    printf("Zile: %d\n", d);
    printf("Suma Medie: %02.f\n", s2 / (float) d);
    printf("Suma Ramasa: %d", s2 - s);

    return 0;
}

