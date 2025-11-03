#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int Soto = a/5000;
    a%=5000;
    printf("%d %d", Soto,a);

    return 0;
}