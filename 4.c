#include <stdio.h>

int a, b, c;

int main(){
    printf("�������һ������");
    scanf("%d", &a);
    printf("������ڶ�������");
    scanf("%d", &b);
    c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    printf("���Լ����%d", b);
    
    scanf("%d", &a);
    return 0;
}
