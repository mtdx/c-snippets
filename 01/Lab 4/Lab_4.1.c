#include <stdio.h>

int main() {
	int n, v[50], i, min, a = 0;

	printf("n = ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("v[%i] = ", i);
		scanf("%d", &v[i]);
	}

	min = v[0];

	for (i = 1; i < n; i++) {
		if (v[i] < min) min = v[i];
	}

	for (i = 0; i < n; i++) {
		if (v[i] == min) a++;
	}

	printf("Min: %d \n", min);
	printf("Aparitii: %d", a);

	return 0;
}

