#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int soban = a/2 + b/2 + c/2 + a%2 + b%2 + c%2;
    printf("%d", soban);

    return 0;
}