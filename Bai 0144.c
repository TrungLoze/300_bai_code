#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int t,tong=0,dem=0;
    while(scanf("%d",&t)==1){
        if(t<0){
            tong+=t;
            dem++;
        }
    }
    if(dem){
        printf("%0.1f",(float)tong/dem);
    }else{
        printf("0.0");
    }
    
    return 0;
}