#include <stdio.h>

int a, b, c;

int main(){
    printf("请输入第一个数：");
    scanf("%d", &a);
    printf("请输入第二个数：");
    scanf("%d", &b);
    c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    printf("最大公约数是%d", b);
    
    scanf("%d", &a);
    return 0;
}
