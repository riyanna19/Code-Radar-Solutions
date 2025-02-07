#include <stdio.h>

int main(){
    char rb;
    printf("");
    scanf("%c", &rb);
    if(rb>0 && rb<9){
        printf("Digit\n");
    }else if(rb>='a' && rb<='z' || rb>='A' && rb<='Z'){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("Vowel\n");
            printf("Consonants\n");
        }
    }else{
        printf("Special Characters")
    }
    return 0;
}