#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a=='A'){
        printf("Excellent");
    }else if(a=='B'){
        printf("Good");
    }else if(a=='C'){
        printf("Average");
    }else if(a=='D'){
        printf("Below Average");
    }else if(a=='F'){
        print("Fail");
    }else{
        printf("Invalid grade");
    }
    return 0;
}