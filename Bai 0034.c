#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int max = n;
    while (scanf("%d",&n)==1){
        if(n>max){
            max = n;
        }
    }
    printf("%d",max);
    
}