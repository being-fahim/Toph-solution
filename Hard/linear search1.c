#include <stdio.h>

int main(){
    int a[5] = {12, 23, 34, 45, 56};
    int b , c = -1;
    scanf("%d", &b);

    for(int i = 0; i < 5; i++){
        if(b == a[i])
            c = i;
    }
    if(c == -1){
        printf("There is no %d", b);
    }else{
        printf("Position: %d", c);
    }
}
