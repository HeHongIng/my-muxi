#include <stdio.h>

int main(){
    int  n, k, n1 = 0, n2 = 0, t1 = 0, t2 = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    for(int i = 1;i <= n;i++){
        if (i % k == 0){
            n1++;
            t1 += i;
        }
        else{
            n2++;
            t2 += i;
        }
    }
    printf("%.1f ", (float)t1 / n1);
    printf("%.1f", (float)t2 / n2);
    return 0;
}
