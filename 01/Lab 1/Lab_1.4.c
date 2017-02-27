#include <stdio.h>

int main() {
    int p_h, p_m, p_s;
    int d_h, d_m, d_s;
    int s_h, s_m, s_s;

    printf("Ora plecare: ");
    scanf("%d:%d:%d", &p_h, &p_m, &p_s);

    printf("Durata: ");
    scanf("%d:%d:%d", &d_h, &d_m, &d_s);

    s_s = p_s + d_s;
    s_m = p_m + d_m;
    s_h = p_h + d_h;

    if (s_s > 60) {
        s_m += s_s / 60;
        s_s = s_s % 60;
    }
    if (s_m > 60) {
        s_h += s_m / 60;
        s_m %= 60;
    }
    if (s_h > 24) {
        s_h = s_h % 24;
    }

    printf("Ora sosire: %0.2d:%0.2d:%0.2d", s_h, s_m, s_s);


    return 0;
}

