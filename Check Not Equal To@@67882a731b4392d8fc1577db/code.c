#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if(a!=b){
        printf("True\n", a);
    }else{
        printf("False\n", b);
    }
    return 0;
}