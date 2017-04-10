# include<stdio.h>
# include<stdlib.h>
# include<string.h>


int main() {
    FILE *fin;
    char line[1001], cuv[30], *p;

    fin = fopen("text.txt", "r");
    printf("Cuv = ");
    scanf("%s", cuv);
    int l = 1, c;


    while (fgets(line, 1001, fin) != NULL) {
        p = strtok(line, " ,.!?\n");
        c = 1;
        while (p != NULL) {
            if (strcmp(p, cuv) == 0)
                printf("(%d, %d)", l, c);
            c++;
            p = strtok(NULL, " ,.!?\n");
        }
        l++;
    }

    fclose(fin);

    return 0;
}