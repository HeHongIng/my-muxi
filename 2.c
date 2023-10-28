#include <stdio.h>

int f1, f2;

int main(void){

    printf("第一门成绩:");
    scanf("%d", &f1);
    printf("第二门成绩:");
    scanf("%d", &f2);

    switch(f1 >= 60 && f1 <=100 &&f2 >= 60 && f2 <= 100){
        case 1:
            printf("it is pass.");
            break;
        default:
            switch (f1 < 0 || f1 > 100 || f2 < 0 || f2 > 100)
            {
            case 1:
                printf("it is error.");
                break;
            
            default:
                printf("it is not pass.");
                break;
            }
    }

    scanf("%d", &f1);

    return 0;
}
