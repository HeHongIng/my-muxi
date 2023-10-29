#include <stdio.h>
#include <stdlib.h>

float total;
int n;

int main(){
    scanf("%f", &total);
    scanf("%d", &n);

    float ave = total / n;
    int cup = n * 2;

    printf("%.3f\n%d\n",ave,cup);
    system("pause");
    return 0;
}
