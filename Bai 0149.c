#include<stdio.h>

int main(){
    int t,n=0;
    int a[1000000];
    while (scanf("%d",&t)==1){
        a[n]=t;
        n++;
    }

    int k=a[n-1];
    n--;

    for(int i=0;i<n;i++){
        if(i==k) continue;
        printf("%d ",a[i]);
    };

    return 0;
}