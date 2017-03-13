# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
    char c[20], s[200] = "";
    int n, i;
    unsigned lmax = 0;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", c);
        if (strlen(c) > lmax) {
            lmax = strlen(c);
            strcpy(s, c);
        } else if (strlen(c) == lmax) {
            strcat(s, " ");
            strcat(s, c);
        }
    }

    printf("\n");
    printf("%s", s);

    return 0;
}