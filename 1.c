#include <stdio.h>

float a, b, c;
int type;
char s;

int main(void){
    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    printf("c:");
    scanf("%f", &c);
    if (a > 0 && b > 0 && c > 0){
        if ((a + b) > c && (a + c) > b && (b + c) > a ){
            if (a == b && b == c & a == c){
                printf("%d", 1);
            }
            else if (a == b || a == c || b == c)
            {
                printf("%d", 2);
            }
            else
            {
                printf("%d", 3);
            }
        }
        else{
            printf("%d", 0);
        }
    }
    else
    {
        printf("%d", 0);
    }
    
    scanf("%s", &s);
    return 0;
}
