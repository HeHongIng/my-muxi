#include <stdio.h>

int main(){
    int n, num = 1;
    scanf("%d", &n);
    for (int i = n;i > 0;i--){
        for (int j = 0;j < i;j++){
            if (num < 10){
                printf("0%d",num);
            }
            else{
                printf("%d", num);
            }
            num++;
        }
        printf("\n");
    }
    return 0;
}
