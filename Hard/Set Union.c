#include <stdio.h>

int i;

int main() {
    int n, m, j = 0, x, y = 0, z = -1;
    scanf("%d %d", &n, &m);

    int a[n], b[m], c[x];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i];

    for (i = n; i < x; i++)
        c[i] = b[j++];


    for (i = 0; i < x; i++) {
        for (int j = 0; j < i; j++) {
            if (c[i] == c[j])
                z++;
        }

        if (z == -1)
            c[y++] = c[i];

        z = -1;
    }
    for (i = 0; i < y; i++)
        printf("%d ", c[i]);
}
