#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int t,i=0,min,index=-1,check=0;;
    while(scanf("%d",&t)==1){
        if(index==-1 && t < 0){
            min = t;
            index=i;
            check = 1;
        }
        if(t<0 && t<min){
            min = t;
            index = i;
            check=1;
        }
        i++;
    }
    if(check){
        printf("%d\n%d",min,index);
    }else{
        printf("-");
    }
    
    return 0;
}