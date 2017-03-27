#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s, *p, *aux;
    int lmax = 0;

    s = (char *) malloc(100);
    aux = (char *) malloc(100);

    printf("s = ");
    fgets(s, 100, stdin);
    if (s[strlen(s) - 1] == '\n')
        s[strlen(s) - 1] = '\0';

    strcpy(aux, s);
    p = strtok(aux, " .,;!?\n");
    while (p != NULL) {

        if (strlen(p) > lmax) lmax = strlen(p);
        p = strtok(NULL, " .,;!?\n");
    }

    strcpy(aux, s);
    p = strtok(aux, " .,;!?\n");
    while (p != NULL) {

        if (strlen(p) == lmax) printf("%s\n", p);
        p = strtok(NULL, " .,;!?\n");
    }


    free(s);
    return 0;
}