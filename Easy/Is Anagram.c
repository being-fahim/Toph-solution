#include <stdio.h>

int main()
{

    char a[100], b[100];

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    int x = 0, y = 0, lena = 0, lenb = 0;
    while(a[lena] != '\0')
        lena++;
    while(b[lenb] != '\0')
        lenb++;
    //printf("%d %d", lena, lenb);
    for(int i = 0; i < lena - 1; i++)
        x = x + a[i];
    for(int i = 0; i < lenb - 1; i++)
        y = y + b[i];

    if(x == y)
        printf("Yes");
    else
        printf("No");
}
