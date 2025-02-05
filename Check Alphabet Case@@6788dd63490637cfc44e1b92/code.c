#include <stdio.h>
#include ctype.h>

int main(){
    char a[100];
    scanf("%s", &a);
    if(a isupper && a islower){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
}