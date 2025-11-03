#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n%2==0){
        printf("Chan\n");
        if(n>0){
            printf("Duong");
        }else if(n<0){
            printf("Am");
        }else{
            printf("Khong");
        }
    }else{
        printf("Le\n");
        if(n>0){
            printf("Duong");
        }else if(n<0){
            printf("Am");
        }else{
            printf("Khong");
        }
    }
    return 0;
}