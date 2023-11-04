#include <stdio.h>

int main(){
    int h, r, n;
    float v;
    scanf("%d", &h);
    scanf("%d", &r);
    v = h * r * r * 3.14;
    n = 19999 / v +1;
    printf("%d", n);
    return 0;
}
