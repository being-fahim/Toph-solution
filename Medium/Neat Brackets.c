#include <stdio.h>

int main() {
	char a[25];
	scanf("%s", a);
	int len = 0, count = 0;
	while(a[len] != '\0')
		len++;

	for(int i = 0; i < len; i++){
        if(a[i] == '(')
            count++;
        else
            count--;

        if(count < 0) {
            printf("No");
            return 0;
        }
    }
    if(count == 0)
        printf("Yes");
    else
        printf("No");
	return 0;
}
