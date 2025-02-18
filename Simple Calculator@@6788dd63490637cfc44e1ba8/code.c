#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    c=(a+b || a-b || a*b || a/b);
    printf("%d", c);

}