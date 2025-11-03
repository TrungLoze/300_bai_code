#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int Soto5 = a/5000;
    a%=5000;
    int Soto2 = a/2000;
    a%=2000;
    int Soto1 = a/1000;
    a%=1000;
    printf("%d %d %d", Soto5,Soto2,Soto1);

    return 0;
}