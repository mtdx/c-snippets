#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void eliminare(char s[], char t[], char v[]) {
    int i, k;
    k = 0;

    for (i = 0; i < strlen(s); i++)
        if (strchr(t, s[i]) == NULL)
            v[k++] = s[i];

    v[k] = '\0';
}

char *eliminare2(char s[], char t[]) {
    int i, k;
    k = 0;
    char *v, *w;
    v = (char *) malloc(strlen(s) + 1);

    for (i = 0; i < strlen(s); i++)
        if (strchr(t, s[i]) == NULL)
            v[k++] = s[i];

    v[k] = '\0';
    w = (char *) malloc(strlen(v) + 1);
    strcpy(w, v);
    free(v);

    return w;
}