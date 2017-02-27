#include <stdio.h>

int main() {
    int x, y;
    char op;

    printf("x op y = ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+')
        printf("r = %d", x + y);
    else if (op == '-')
        printf("r = %d", x - y);
    else if (op == '*')
        printf("r = %d", x * y);
    else if (op == '/')
        printf("r = %0.2f", (float) x / y);

    return 0;
}

