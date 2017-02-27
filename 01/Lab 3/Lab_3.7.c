#include <stdio.h>

int main() {
    float a, aux = 0, o = 1;

    do {
        printf("number: ");
        scanf("%f", &a);

        if (aux == 0) aux = a;
        if (a != 0 && a < aux) o = 0;
        aux = a;
    } while (a);

    if (o) printf("Sirul este crescator");
    else printf("Sirul este descrescator");

    return 0;
}

