#include <stdio.h>

int main() {
	int n, v[50], vf[50] = {0}, x, i, a = 0;

	printf("x = ");
	scanf("%d", &x);

	printf("n = ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("v[%i] = ", i);
		scanf("%d", &v[i]);
	}

	for (i = 0; i < n; i++) {
		if (v[i] == x) {
			a++;
			vf[i]++;
		}
	}

	printf("Aparitii %d", a);
	for (i = 0; i < n; i++) {
		if (vf[i]) printf("pozitia: %d", i + 1);
	}

	return 0;
}

