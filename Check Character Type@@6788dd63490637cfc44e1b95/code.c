#include <stdio.h>

int main(){
    char rb;
    printf("");
    scanf("%c", &rb);
    if((rb>='0') && (rb<='9')){
        printf("Digit\n");
    }else if((rb>='a' && rb<='z') || (rb>='A' && rb<='Z')){
        if(rb=='a' || rb=='e' || rb=='i' || rb=='o' || rb=='u' || rb=='A' || rb=='E' || rb=='I' || rb=='O' || rb=='U'){
            printf("Vowel\n");
           
        }
    }else{
        printf("Consonant\n");
    }else{
        printf("Special Character");
    }
    return 0;
}