#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* p = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    int k;
    scanf("%d",&k);
    printf("%d",*(p+k));
    return 0;
}