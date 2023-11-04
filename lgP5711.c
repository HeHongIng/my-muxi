#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    if (n % 4 == 0){
        if (n % 400 == 0){
            printf("%d", 1);
        }
        else if (n % 100 == 0){
            printf("%d", 0);
        }
        else{
            printf("%d", 1);
        }
    }
    else{
        printf("%d", 0);
    }
    return 0;
}
