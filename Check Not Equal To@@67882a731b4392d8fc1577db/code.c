#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if(a!=b){
        printf("True %d\n", a);
    }else{
        printf("False %d\n", b);
    }
    return 0;
}