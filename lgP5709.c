#include <stdio.h>

int main(){
    int m, t, s, n;
    scanf("%d", &m);
    scanf("%d", &t);
    scanf("%d", &s);
    if(t == 0){
        printf("%d", 0);
    }
    else{
        n = m - ((s - 1) / t + 1);
        if(n > 0){
            printf("%d", n);
        }
        else{
            printf("%d", 0);
        }
    }
    return 0;
}
