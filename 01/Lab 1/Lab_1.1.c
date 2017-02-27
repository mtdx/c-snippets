#include <stdio.h>

int main() {
    int n1, n2;
    float f1, f2;
    char c1, c2;

    printf("2 numbere intregi: ");
    scanf("%d %d", &n1, &n2);

    printf("2 numbere reale: ");
    scanf("%f %f", &f1, &f2);

    getchar();
    printf("2 caractere: ");
    scanf("%c %c", &c1, &c2);

    printf("%d, %d, %.2f, %.2f, %c, %c", n1, n2, f1, f2, c1, c2);
    printf("\n\n");
    printf("%d, %.2f, %c, %d, %.2f, %c", n1, f1, c1, n2, f2, c2);
    printf("\n\n");
    printf("%d \n%d \n%.2f \n%.2f \n%c \n%c", n1, n2, f1, f2, c1, c2);
    printf("\n\n");
    printf("%d %d \n%.2f %.2f \n%c %c\n", n1, n2, f1, f2, c1, c2);

    return 0;
}

