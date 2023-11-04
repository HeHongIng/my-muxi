#include <stdio.h>

int main(){
    int a, d = 1;
    scanf("%d", &a);
    while (a > 1){
        a /= 2;
        d++;
    }
    printf("%d", d);
    return 0;
}
