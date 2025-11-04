#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int sum=0,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        if(t%2==0){
            sum+=t;
            count++;
        }
        
    }
    if(count){
        printf("%0.3f",(float)sum/count);
    }else{
        printf("0.000");
    }
    
    return 0;
}