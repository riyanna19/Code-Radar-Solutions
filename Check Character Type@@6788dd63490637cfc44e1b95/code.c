#include <stdio.h>

int main(){
    char rb;
    printf("");
    scanf("%c", &rb);
    if(rb>0 && rb<9){
        printf("Digit\n");
    }else if(rb>='a' && rb<='z' || rb>='A' && rb<='Z'){
        if(rb=='a' || rb=='e' || rb=='i' || rb=='o' || rb=='u'){
            printf("Vowel\n");
           
        }
    }else{
        printf("Special Characters");
    }else{
        printf("Consonant");
    }
    return 0;
}