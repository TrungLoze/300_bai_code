#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    if(0<= t && t <=20) printf("Mua Dong");
    if(21<=t && t <=25) printf("Mua Xuan");
    if(26<=t && t <=30) printf("Mua Thu");
    if(t > 30) printf("Mua Ha");
    
}