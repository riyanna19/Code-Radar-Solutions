#unclude <stdio.h>
int main(){
    int a, shift;
    scanf("%d %d", &a, &shift);
    int result=num>>shift;
    printf("%d", result);
    return 0;
}