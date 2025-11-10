#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n<=1){
        printf("%d",12000);
    }else if(1<n && n<=30){
        printf("%d",12000+(n-1)*10000);
    }else{
        printf("%d",12000+29*10000+(n-30)*9000);
    }
    return 0;
}