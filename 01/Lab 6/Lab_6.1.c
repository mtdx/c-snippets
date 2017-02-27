#include <stdio.h>

int main() {
    int a[20] = {0}, m, b[20] = {0}, n, c[40] = {0};
    int i, j = 0, k = 0;

    printf("m = ");
    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < m + n;) {
        if (j < m && k < n) {
            if (a[j] < b[k]) {
                c[i] = a[j];
                j++;
            } else {
                c[i] = b[k];
                k++;
            }
            i++;
        } else if (j == m) {
            for (; i < m + n;) {
                c[i] = b[k];
                k++;
                i++;
            }
        } else {
            for (; i < m + n;) {
                c[i] = a[j];
                j++;
                i++;
            }
        }
    }

    for (i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }
}
