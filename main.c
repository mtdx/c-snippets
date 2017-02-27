#include <stdio.h>

int main() {
    int t, n, s;
    scanf("%d", &n);
    t = n;
    s = 0;

    while (t >= 1){
        printf("mod-%d\n", n % t);
        if(n % t == 0){
            s = s + t;
            printf("+-%d\n", s);
        }

        t--;
    }

//    printf("%d", s);
    return 0;
}

