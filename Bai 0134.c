#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int max=0,index=0;
    scanf("%d",&n);
    scanf("%d", &max);
    for(int i=1;i<n;i++){
        int t;
        scanf("%d",&t);
        if(t>max){
            max = t;
            index = i;
        }
    }
    printf("%d %d",max,index);
    
    return 0;
}