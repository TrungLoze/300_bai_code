#include<stdio.h>

int main(){
    int t,n=0;
    int a[1000000];
    while (scanf("%d",&t)==1){
        a[n]=t;
        n++;
    }

    int x=a[n-2],k=a[n-1];
    n-=2;

    for(int i=0;i<k;i++){
        printf("%d ",a[i]);
    }

    printf("%d ",x);

    for(int i=k;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}