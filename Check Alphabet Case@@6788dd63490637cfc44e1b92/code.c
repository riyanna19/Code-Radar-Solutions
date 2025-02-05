#include <stdio.h>
#include ctype.h>

int main(){
    char a;
    scanf("%s", &a);
    if(isupper(a) && islower(a)){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
}