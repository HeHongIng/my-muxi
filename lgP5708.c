#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, c, p, s;

int main(){
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    p = 0.5 * (a + b + c);
    s = pow(p * (p - a) * (p - b) * (p - c), 0.5);
    printf("%.1f\n", s);
    system("pause");
    return 0;
}
