#include <stdio.h>

int main() {
	int N, c = 0;
	scanf("%d", &N);
	printf("%d = ", N);
	for(int i = 2; N != 1; i++){
		while(N % i == 0){
			N = N / i;
			c++;
		}
		if(c != 0){
			printf("%d ^ %d", i, c);
			if(N != 1)
				printf(" * ");
		}
		c = 0;
	}
	return 0;
}

