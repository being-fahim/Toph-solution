#include <stdio.h>
int main(){
    int match,c, len = 0, x = 0, ball, over;
    char info[100];
    scanf("%d", &match);

    for(int i = 0; i < match; i++){
        scanf("%s", info);
        while(info[len] != '\0')
            len++;

        for(c = 0; c < len; c++){
            if(info[c] == '1' || info[c] == '2' || info[c] == '3' || info[c] == '4' || info[c] == '5' || info[c] == '6' || info[c] == 'O' || info[c] == '0')
                x++;
        }

        over = x / 6;
        ball = x % 6;

        if (ball > 1 && over == 0)
            printf("%d BALLS\n", ball);
        else if (ball == 1 && over == 0)
            printf("%d BALL\n", ball);
        else if (ball > 1 && over == 1)
            printf("%d OVER %d BALLS\n", over, ball);
        else if (ball > 1 && over > 1)
            printf("%d OVERS %d BALLS\n", over, ball);
        else if (ball == 0 && over > 1)
            printf("%d OVERS\n", over);
        else if (ball == 0 && over == 1)
            printf("%d OVER\n", over);
        else if (ball == 1 && over == 1)
            printf("%d OVER %d BALL\n", over, ball);
        else if (ball == 1 && over > 1)
            printf("%d OVERS %d BALL\n", over, ball);
        len = 0;
        x = 0;
    }


}
