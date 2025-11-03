#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n<=50){
        printf("%d",n*600);
    }else if(50<n && n<=100){
        printf("%d",600*50+(n-50)*800);
    }else if(100<n && n<=200){
        printf("%d",600*50+800*50+(n-100)*1100);
    }else{
        printf("%d",600*50+800*50+1100*100+(n-200)*1500);
    }
    return 0;
}