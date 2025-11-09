#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int t,tong=0;
    while(scanf("%d",&t)==1){
        if(t<0){
            tong+=t;
        }
    }
    printf("%d",tong);
    
    return 0;
}