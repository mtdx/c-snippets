#include <stdio.h>

int main() {
    int h, m, s;

    printf("Ore: ");
    scanf("%d", &h);

    printf("Minute: ");
    scanf("%d", &m);

    printf("Secunde: ");
    scanf("%d", &s);

    if (!(h >= 0 && h <= 24)) {
        printf("Ore Invalide");
        return 0;
    }

    if (!(m >= 0 && h <= 60)) {
        printf("Minute Invalide");
        return 0;
    }

    if (!(s >= 0 && s <= 60)) {
        printf("Ore Invalide");
        return 0;
    }

    printf("%0.2d:%0.2d:%0.2d \n", h, m, s);
    return 0;
}

