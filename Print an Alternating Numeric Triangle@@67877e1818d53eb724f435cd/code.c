#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(inti=0; i<N; i++){
        int start = (i%2==0) 1:0;
        for(int j=0; j<=i; j++){
            printf("%d ", start);
        }
        printf("\n");
    }
}

