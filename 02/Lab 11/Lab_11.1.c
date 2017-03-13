#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, *v, *vpoz, *vneg, nrpoz = 0, nrneg = 0, i;

    printf("n = ");
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        if (v[i] > 0) nrpoz++;
        else if (v[i] < 0) nrneg++;
    }

    vpoz = (int *) malloc(nrpoz * sizeof(int));
    vneg = (int *) malloc(nrneg * sizeof(int));

    nrpoz = nrneg = 0;
    for (i = 0; i < n; i++) {
        if (v[i] > 0) vpoz[nrpoz++] = v[i];
        else if (v[i] < 0) vneg[nrneg++] = v[i];
    }

    for (i = 0; i < nrpoz; i++) {
        printf("vpoz[%d] = %d \n", i, vpoz[i]);
    }

    for (i = 0; i < nrneg; i++) {
        printf("vneg[%d] = %d \n", i, vneg[i]);
    }

    free(v);
    free(vneg);
    free(vpoz);

    return 0;
}

