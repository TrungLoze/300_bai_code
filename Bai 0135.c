#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int min=0,index=0;
    scanf("%d",&n);
    scanf("%d", &min);
    for(int i=1;i<n;i++){
        int t;
        scanf("%d",&t);
        if(t<min){
            min = t;
            index = i;
        }
    }
    printf("%d %d",min,index);
    
    return 0;
}