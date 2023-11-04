#include <stdio.h>

int main(){
    int n, temp, min;
    scanf("%d", &n);
    scanf("%d", &min);
    for(int i = 1;i < n;i++){
        scanf("%d", &temp);
        if (temp < min){
            min = temp;
        }
    }
    printf("%d", min);
    return 0;
}
