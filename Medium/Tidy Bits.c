#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, count = 0;
    scanf("%d", &a);
    char b[33], x[33];

    snprintf(b, sizeof(b), "%b", a);

    int len = 0, extra = 0;
    while(b[len] != '\0')
        len++;
    
    for(int i = 0; i < len; i++){
        if(b[i] == '1')
            x[extra++] = '1';
    }
    int c = (int)strtol(x, NULL, 2);
    printf("%d\n", c);
}
