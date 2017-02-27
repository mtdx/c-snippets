#include <stdio.h>

int main() {
    int i, v[100], j, n, aux;
    printf("n= ");
    scanf("%d", &n);

    i = 0;
    j = n - 1;
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    while (i < j) {
        while ((v[i] % 2 == 0) && (i < n))
            i++;

        while ((v[j] % 2 == 1) && (j >= 0))
            j--;

        if (i < j) {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", v[i]);

    return 0;
}
