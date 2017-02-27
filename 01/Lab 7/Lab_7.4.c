#include <stdio.h>

int main() {
    int k = 0, i, j, n;
    int a[20][20];

    // a
    for (i = 0; i < n; i++)
        if (i % 2 == 0)
            for (j = 0; j < n; j++)
                a[i][j] = k++;
        else
            for (j = n - 1; j >= 0; j--)
                a[i][j] = k++;

    // b
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = i < j ? i : j;

    // c
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = i > j ? i - j : j - i;

    return 0;
}