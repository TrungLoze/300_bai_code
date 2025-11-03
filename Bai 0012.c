#include<stdio.h>
#include<math.h>

int main(){
    int a;
    scanf("%d", &a);
    int Chuc = a/10;
    int DV = a%10;
    printf("%d %d", DV,Chuc);
    return 0;
}