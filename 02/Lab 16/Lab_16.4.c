# include<stdio.h>
# include<stdlib.h>
# include<string.h>


int main() {
    FILE *f1, *f2;
    int cant;
    float price, x = 0.0;
    char name[50];

    f1 = fopen("prod.txt", "r");
    f2 = fopen("stock.txt", "r");

    while (fscanf(f, "%s %d $f", name, &cant, &price) == 3) {
        x += cant * price;
        fprintf(f2, "%f \n", cant * price);
    }
    fprintf(f2, "%f", x);

    fclose(f1);
    fclose(f2);


    return 0;
}