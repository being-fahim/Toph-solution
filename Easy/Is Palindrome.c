#include <stdio.h>

int main() {
	char a[100];
	fgets(a, sizeof(a), stdin);
	int len = 0, f = -1;
	while(a[len] != '\0'){
		len++;
	}
    int j = len - 1;
	len = len/2 + 1;
	for(int i = 0; i < len; i++){
			if(a[i] != a[j--])
				f++;
	}
	if(f == -1)
		printf("Yes");
	else
		printf("No");

	return 0;
}
