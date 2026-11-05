#include <stdio.h>

int main() {
	int r, c, f = 0;
	scanf("%d %d", &r, &c);

	char a[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf(" %c", &a[i][j]);
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (a[i][j] == '.' &&
			    (j == 0 || a[i][j - 1] != '*') &&
			    (j == c - 1 || a[i][j + 1] != '*') &&
			    (i == 0 || a[i - 1][j] != '*') &&
			    (i == r - 1 || a[i + 1][j] != '*')) {
				f++;
			}
		}
	}

	printf("%d\n", f);
	return 0;
}
