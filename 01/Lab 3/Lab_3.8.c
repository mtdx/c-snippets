#include <stdio.h>

int main() {
    int n, sum, varsta, sm, sf, aux, cnp_an, an;
    long long unsigned int cnp;

    printf("Numar Studenti: ");
    scanf("%d", &n);

    an = 2016;
    sum = sf = sm = 0;

    for (int i = 0; i < n; ++i) {
        printf("CNP %d", i + 1);
        scanf("%I64u", &cnp);
        aux = cnp / 10000000000ull;
        cnp_an = aux % 100;
        aux /= 100;

        switch (aux) {
            case 1:
                varsta = an - (1900 + cnp_an);
                sm++;
                break;
            case 2:
                varsta = an - (1900 + cnp_an);
                sf++;
                break;
            case 5:
                varsta = an - (2000 + cnp_an);
                sm++;
                break;
            case 6:
                varsta = an - (2000 + cnp_an);
                sf++;
                break;
        }
        sum += varsta;
    }

    printf("Medie %d", sum / n);
    printf("Studenti %d", sm);
    printf("Studente %d", sf);

    return 0;
}

