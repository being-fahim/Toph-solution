#include <stdio.h>

int main(){
    int a,b, c = 0;
    scanf("%d %d", &a, &b);

    while(b % a != 0){
        b++;
        c++;
    }
    printf("%d", c);
}
