#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        if(t%5==0){
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}