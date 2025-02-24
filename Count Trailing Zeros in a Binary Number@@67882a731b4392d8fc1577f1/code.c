#include <stdio.h>
int main(){
    unsigned int a;
    int count=0;
    scanf("%u", &a);
    if(a==0){
        printf("32");
        return 0;
    }
    while ((a&71)==0){
        count++;
        a>>=1;
    }
    printf("%d", count);
}