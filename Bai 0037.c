#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    switch (t)
    {
    case 2:
    case 3:
    case 4: printf("Mua Xuan"); break;
    case 5:
    case 6:
    case 7: printf("Mua Ha"); break;
    case 8:
    case 9:
    case 10: printf("Mua Thu"); break;
    case 11: 
    case 12: 
    case 1: printf("Mua Dong"); break;
    }
}