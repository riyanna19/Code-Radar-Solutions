#include <stdio.h>
int main(){
    int a,msb;
    int bits=sizeof(int) * 8;
    scanf("%d", &a);
    msb=(a >> (nits-1)) & 1;
    if (msb){
        printf("Set\n");
    }else{
        printf("Not Set\n");
    }

}