#include <stdio.h>

int main(){
    int a;
    char b[];
    printf("");
    scanf("%d %c", &a, &b);
    printf("Hexadecimal: %d %x\n", a);
    printf("Octal: %c %o\n", b);
    return 0;


}