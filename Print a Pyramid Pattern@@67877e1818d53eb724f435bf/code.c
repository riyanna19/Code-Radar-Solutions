#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n==1){
      printf("*");
    }else if(n==2){
      printf(" *\n");
      printf("***");
    }else if(n==3){
      printf("  *\n");
      printf(" ***\n");
      printf("*****");
    }
}