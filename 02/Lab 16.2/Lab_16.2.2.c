# include <stdio.h>
# include <stdlib.h>

int main() {
    FILE *f = fopen("lena.bmp", "rb+");
    int dim;
    unsigned int m, n;

    fseek(f, 0, SEEK_END);
    dim = ftell(f);
    printf("Dim : %d", dim);
    printf("\n");

    rewind(f);
    fseek(f, 2, SEEK_SET);
    fread(&dim, sizeof(int), 1, f);
    printf("Dim2 : %d", dim);
    printf("\n");

    rewind(f);
    fseek(f, 18, SEEK_SET);
    fread(&m, sizeof(int), 1, f);
    printf("M : %d", m);

    printf("\n");
    fread(&n, sizeof(int), 1, f);
    printf("N : %d", n);

    FILE *g = fopen("lena2.bmp", "wb+");
    rewind(f);
    unsigned char h[54];
    fread(h, 1, 54, f);
    fwrite(h, 1, 54, g);

    unsigned char crt;
    while (fread(&crt, 1, 1, f) == 1) {
        crt = 255 - crt;
        fwrite(&crt, 1, 1, g);
    }
    fclose(g);


    FILE *ic = fopen("lena3.bmp", "wb+");
    rewind(f);
    fread(h, 1, 54, f);
    fwrite(h, 1, 54, ic);

    int k;
    while (fread(&crt, 1, 1, f) == 1) {
        k = rand() * rand();
        crt ^= k;
        fwrite(&crt, 1, 1, ic);
    }
}
