# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
    int i;
    char v[11] = "aeiouAEIOU", s[100];

    printf("s = ");
    fgets(s, 100, stdin);


    for (i = 0; i < strlen(s); i++) {
        if (strchr(v, s[i]) != NULL) {
            strcpy(s + i, s + i + 1);
            i--;
        }
    }

    printf("%s", s);

    return 0;
}