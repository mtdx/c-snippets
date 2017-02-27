#include <stdio.h>

int main() {
    int v[20] = {0}, n, i, j, temp, m, k, c;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("m = ");
    scanf("%d", &m);

    printf("k = ");
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }

    c = 0;
    for (i = n - 1; i >= n - m - c; i--) {
        if(v[i] == v[i + 1]) {
            c++;
            continue;
        }
        printf("%d ", v[i]);
    }

    printf("\n");

    c = 0;
    for (i = 0; i < k + c; i++) {
        if(v[i] == v[i - 1]) {
            c++;
            continue;
        }
        printf("%d ", v[i]);
    }
}

