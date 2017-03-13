# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
    char a[40], b[40];

    printf("a = ");
    scanf("%s", a);

    strcpy(b, a);
    if (strcmp(b, strrev(a)) == 0) {
        printf("Palindrom");
    } else
        printf("Not Palindrom");


    return 0;
}