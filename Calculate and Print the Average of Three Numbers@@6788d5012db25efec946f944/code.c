#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    float d;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    d=(a+b+c)/3.0f;
    printf("Average: %.2f\n", d);
    return 0;
}