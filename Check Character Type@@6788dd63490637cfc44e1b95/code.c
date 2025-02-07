#include <stdio.h>

int main(){
    char rb;
    printf("");
    scanf("%c", &rb);
    if(rb>0 && rb<9){
        printf("Digit\n", rb);
    }else if(rb>='a' && rb<='z' || rb>='A' && rb<='Z'){
        if(rb=='a' || rb=='e' || rb=='i' || rb=='o' || rb=='u'){
            printf("Vowel\n", rb);
           
        }
    }else{
        printf("Special Characters\n", rb);
    }else{
        printf("Consonant", rb);
    }
    return 0;
}