#include <stdio.h>
unsigned int toggleNthBit(unsigned int a, int n){
    return a ^(1<<n);
}
int main(){
    unsigned int a;
    int n;
    scanf("%u" &a);
    scanf("%d", &n);
    unsigned int result=toggleNthBit(a, n);
    printf("%u", result);
    return 0;
}