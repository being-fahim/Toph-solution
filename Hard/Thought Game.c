#include <stdio.h>

int main() {
	int n, c;
    scanf("%d", &n);
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a[i], &b[i]);
		c = (a[i] + b[i]) / 2;
		if(c % 2 == 0)
			printf("Sadia will be happy.\n");
		else
			printf("Oops!\n");
        c = 0;
	}

	return 0;
}
