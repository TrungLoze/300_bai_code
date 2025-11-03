#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* p = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    int k,x;
    scanf("%d",&k);
    scanf("%d",&x);
    p[k] = x;
    for(int i=0;i<n;i++){
        printf("%d\n",p[i]);
    }
    return 0;
}