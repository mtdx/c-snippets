# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int cmp(const void *a, const void *b) {
    char *x = (char *) a;
    char *y = (char *) b;

    return strcmp(x, y);
}

int main() {
    int i;
    FILE *f = fopen("test.txt", "r");
    if (f == NULL) {
        printf("Fisier Inexistent");
        return -1;
    }

    char cuv[100][20];
    char atom[20];
    int k = 0;

    while (fscanf(f, "%s", atom) == 1) {
        strcpy(cuv[k++], atom);
    }

    qsort(cuv, k, 20, cmp);
    for (i = 0; i < k; i++)
        printf("%s\n", cuv[i]);

    return 0;
}