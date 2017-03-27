#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[100], t[20];
    char *p;
    int r = 0;

    printf("s = ");
    fgets(s, 100, stdin);
    if (s[strlen(s) - 1] == '\n') s[strlen(s) - 1] = '\0';

    printf("t = ");
    fgets(t, 20, stdin);
    if (t[strlen(t) - 1] == '\n') t[strlen(t) - 1] = '\0';

    p = strtok(s, " .,;?!");
    while (p != NULL) {
        if (strcmp(p, t) == 0) r++;
        p = strtok(NULL, " .,;?!");
    }

    printf("%d", r);

    return 0;
}