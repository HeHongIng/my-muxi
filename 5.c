#include <stdio.h>

int n = 2,c = 1;

int check(int n){
    for(int i = 2; i <= n / 2; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    while(n <= 100){
        if (check(n)){
            if(c % 5 == 0){
                printf("%d\n", n);
            }
            else
            {
                printf("%d\t", n);
            }
            c++;
        }
        n++;
    }
    scanf("%d", &n);
    return 0;
}