#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        if(t%3==0){
            sum+=t;
        }
        
    }
    printf("%d",sum);
    return 0;
}