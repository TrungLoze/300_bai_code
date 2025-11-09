#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int t,dem=0;
    while(scanf("%d",&t)==1){
        if(t<0){
            dem++;
        }
    }
    printf("%d",dem);
    
    return 0;
}