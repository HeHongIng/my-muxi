#include <stdio.h>

int main(){
    int l1, l2, x;
    scanf("%d", &x);
    if(x % 2 == 1){
        l1 = 0;
    }
    else{
        l1 = 1;
    }
    if(x > 4 && x <= 12){
        l2 = 1;
    }
    else{
        l2 = 0;
    }
    if(l1 && l2){
        printf("%d ", 1);
    }
    else{
        printf("%d ", 0);
    }
    if(l1 || l2){
        printf("%d ", 1);
    }
    else{
        printf("%d ", 0);
    }
    if(l1 && !l2 || !l1 && l2){
        printf("%d ", 1);
    }
    else{
        printf("%d ", 0);
    }
    if(!l1 && !l2){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}
