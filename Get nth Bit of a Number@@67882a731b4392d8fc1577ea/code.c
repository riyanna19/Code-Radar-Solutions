#include <stdio.h>
int getNthBit(int a, int n){
    return (a >> n) & 1;
}
int main(){
    int a, n, bit;
    scanf("%d", &a);
    scanf("%d", &n);
    bit = getNthBit(a, n);
    printf("%d", bit);
    return 0;
}