#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b==c){
        printf("Equilateral");
    }else if((a==b) && (b!=c) && (c!=a)){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }
    return 0;
}