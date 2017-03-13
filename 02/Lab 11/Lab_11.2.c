#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, *v, *vmaxindexes, i, max, k;

    printf("n = ");
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    max = v[0];
    k = 1;
    for (i = 0; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        } else if (v[i] == max)
            k++;
    }

    vmaxindexes = (int *) malloc(k * sizeof(int));
    k = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == max) {
            vmaxindexes[k++] = i;
        }
    }

    for (i = 0; i < k; i++) {
        printf("vmaxindexes[%d] = %d \n", i, vmaxindexes[i]);
    }

    free(v);
    free(vmaxindexes);

    return 0;
}