#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	getchar();
	char a[100];
	fgets(a, sizeof(a), stdin);

	for(int i = 0; a[i] != '\0'; i++){
		char ch = a[i];
		if(ch >= 'a' && ch <= 'z')
			a[i] = (ch - 'a' - n + 26) % 26 + 'a';
	}
	printf("%s", a);
}
