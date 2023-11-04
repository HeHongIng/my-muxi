#include <stdio.h>

int main(){
    int h, m, h1, m1, h2, m2, t, t1, t2;
    scanf("%d", &h1);
    scanf("%d", &m1);
    scanf("%d", &h2);
    scanf("%d", &m2);
    t1 = h1 * 60 + m1;
    t2 = h2 * 60 + m2;
    t = t2 - t1;
    h = t / 60;
    m = t % 60;
    printf("%d %d", h, m);
    return 0;
}
