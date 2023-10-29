#include <stdio.h>
#include <stdlib.h>

char s1;

int main(){
    scanf("%s", &s1);
    s1 = s1 - 32;
    printf("%c\n", s1);
    system("pause");
    return 0;
}
