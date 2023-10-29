#include <stdio.h>
#include <stdlib.h>

float num, ne;

int main(){
    scanf("%f", &num);
    int n1 = (int)num;
    int n2 = (num - n1) * 10;
    float re = 0.0;
    while (n1 != 0)
    {
        re = re * 10 + n1 % 10;
        n1 = n1 / 10;
    }
    re = re / 1000;
    ne =  n2 + re;
    printf("%.3f", ne);
    system("pause");
    return 0;
}
