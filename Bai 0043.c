#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>80){
        printf("Beo phi");
    }else if(n < 45){
        printf("Suy dinh duong");
    }else{
        printf("Binh thuong");
    }
    
}