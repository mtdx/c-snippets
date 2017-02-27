#include <stdio.h>

int main() {
	int n, v[50], sum = 0, i, e = 0;
	float m = 0;

	printf("n = ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("v[%i] = ", i);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < n; i++) {
		sum += v[i];
	}
	m = sum / (float) n;

	for (i = 0; i < n; i++) {
		if (v[i] > m) e++;
	}

	printf("Media Aritmetica: %0.2f\n", m);
	printf("%d Elemente", e);

	return 0;
}

