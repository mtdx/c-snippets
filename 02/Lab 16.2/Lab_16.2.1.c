# include <stdio.h>
# include <stdlib.h>

int main() {
    int a[10][10], m, n, i, j, l, c;
    FILE *f = fopen("mat.bin", "wb+");

    printf("m = ");
    scanf("%d", &m);

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    fwrite(a, sizeof(int), 100, f);


    printf("l = ");
    scanf("%d", &l);

    printf("c = ");
    scanf("%d", &c);

    rewind(f);

    int x;
    fseek(f, l * 10 * sizeof(int) + c * sizeof(int), SEEK_SET);
    fread(&x, sizeof(int), 1, f);
    printf("%d", x);
    printf("\n");

    fseek(f, -sizeof(int), SEEK_CUR);
    x *= 10;
    fwrite(&x, sizeof(int), 1, f);

    rewind(f);
    fread(a, sizeof(int), 100, f);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}