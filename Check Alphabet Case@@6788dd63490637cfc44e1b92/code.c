#include <stdio.h>
#include ctype.h>

int main(){
    char a;
    scanf("%c", &a);
    if(isupper(a) && islower(a)){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}