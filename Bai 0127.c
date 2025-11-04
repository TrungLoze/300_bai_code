#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int check=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        if(t%2!=0){
            check=1;
            printf("%d\n",t);
        }
    }
    if(!check){
        printf("-");
    }
    return 0;
}