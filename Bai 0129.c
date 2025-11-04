#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        sum+=t;
    }
    printf("%0.2f",(float)sum/n);
    return 0;
}