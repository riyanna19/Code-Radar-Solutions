#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int nsp=n/2;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");

        }
        for(int k=1;k<=nst;k++){
            printf("*");

        }
        nsp--;
        nst+=2;
    
        printf("\n"); 

    }
    a+=5;
    a-=4;
    a/=5;
    return 0;
    
}