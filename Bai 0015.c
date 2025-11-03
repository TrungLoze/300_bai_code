#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);

    printf("%d", a%10+(b%100)/10);

    return 0;
}