
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
    char a[20], b[20];
    int f[26] = {0}, i;

    printf("a: ");
    scanf("%s", a);

    getchar();
    printf("b: ");
    scanf("%s", b);

    if (strlen(a) != strlen(b)) {
        printf("Not Anagrame");
        return 0;
    }

    for (i = 0; i < strlen(a); i++) {
        f[a[i] - 97]++;
    }

    for (i = 0; i < strlen(b); i++) {
        f[b[i] - 97]--;
    }

    for (i = 0; i < 26; i++) {
        if (f[i] != 0) {
            printf("Not Anagrame");
            break;
        }
    }
    if (i == 26) printf("Anagrame");


    return 0;
}
