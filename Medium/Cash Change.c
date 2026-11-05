#include <stdio.h>
int main(){
    int a, list[300], j = 0;
    scanf("%d", &a);
    int t500, t100, t50, t10, t5, t1;

    t500 = a / 500;
    if(a >= 500){
        for(int i = 1; i <= t500; i++)
            list[j++] = 500;
    }
    a = a % 500;
    t100 = a / 100;
    if(a >= 100){
        for(int i = 1; i <= t100; i++)
            list[j++] = 100;
    }
    a = a % 100;
    t50 = a / 50;
    if(a >= 50){
        for(int i = 1; i <= t50; i++)
            list[j++] = 50;
    }
    a = a % 50;
    t10 = a / 10;
    if(a >= 10){
        for(int i = 1; i <= t10; i++)
            list[j++] = 10;
    }
    a = a % 10;
    t5 = a / 5;
    if(a >= 5){
        for(int i = 1; i <= t5; i++)
            list[j++] = 5;
    }
    a = a % 5;
    t1 = a;
    if(a >= 1){
        for(int i = 1; i <= t1; i++)
            list[j++] = 1;
    }
    for(int i = j - 1; i >= 0; i--)
        printf("%d ", list[i]);


}
