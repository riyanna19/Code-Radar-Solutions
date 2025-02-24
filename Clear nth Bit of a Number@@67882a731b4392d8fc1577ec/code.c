#include <stdio.h>
int clearNthBit(int a, int n){
    return a & ~(1 << n);
}
int main(){
    int a, n, bit;
    scanf("%d", &a);
    scanf("%d", &n);
    bit = clearNthBit(a, n);
    printf("%d", bit);
    return 0;
}