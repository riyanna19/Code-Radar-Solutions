#include <stdio.h>
unsigned int toggleNthBit(unsigned int num, int n){
    return num ^(1<<n);
}
int main(){
    unsigned int num;
    int n;
    scanf("%u" &num);
    scanf("%d", &n);
    unsigned int result=toggleNthBit(num, n);
    printf("%u", result);
    return 0;
}